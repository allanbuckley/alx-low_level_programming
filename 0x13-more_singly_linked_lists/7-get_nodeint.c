#include "lists.h"

/**
 * get_nodeint_at_index - This displays the node at an index in a linked list
 * @head: This is the initial node in the linked list
 * @index: The index of the node where to return
 *
 * Return: The pointer to the node we're looking for, or  returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
