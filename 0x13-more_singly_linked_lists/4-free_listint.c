#include "lists.h"

/**
 * free_listint - Function that does free a linked list
 * @head: The listint_t list yet to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
