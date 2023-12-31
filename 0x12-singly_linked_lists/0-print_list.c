#include <stdio.h>
#include "lists.h"

/**
  * print_list - Displays the contents of a linked list
  * @h: A pointer to the list_t list to be printed
  *
  * Return: The number of nodes printed
  */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
