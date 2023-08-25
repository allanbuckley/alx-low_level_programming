#include <stdlib.h>
#include "lists.h"

/**
 * free_list -This function that frees a linked list
 * @head: A pointer to the list_t to be deallocted
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
