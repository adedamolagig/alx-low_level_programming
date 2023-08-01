#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: Pointer to head of list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		/* Store the current node*/
		current = *head;
		/* Move head to the next node*/
		*head = (*head)->next;
		/* Free up memory of the current node*/
		free(current);
	}
	/* Set the head to NULL  at the end of the function*/
	*head = NULL;
}
