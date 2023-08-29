#include "lists.h"

/**
 * pop_listint - This function will delete the head node of a linked list
 * @head: This pointer points to the first element in the linked list
 *
 * Return: The data thats inside the elements previously deleted,
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
