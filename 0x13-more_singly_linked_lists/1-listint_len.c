#include "lists.h"

/**
 * listint_len - This function counts the elements in a linked lists
 * @h: Pointer to a linked list with nodes of data type listint_t
 *
 * Return: The count of  elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
