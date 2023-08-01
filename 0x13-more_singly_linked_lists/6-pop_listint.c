#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Double pointer to the head of the list
 *
 * Return: The data (n) of the deleted head node,or if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;

	if (head != NULL && *head != NULL)
	{
		listint_t *current = *head;
		/* Get the data(n) of the head node */
		data = current->n;
		/* Update head to the next node */
		*head = current->next;
		/* free the memory of the head node */
		free(current);
	}
	/* Return the data (n) of the deleted head or 0 if the list is empty*/
	return (data);
}
