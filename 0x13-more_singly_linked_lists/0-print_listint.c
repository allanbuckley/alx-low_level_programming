#include "lists.h"

/**
 * print_listint - this function displays all the elements of a linked list
 * @h: Linked list of type listint_t to print
 *
 * Return: Count of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
