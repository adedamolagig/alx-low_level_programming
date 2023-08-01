#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function to free a listint_t list
 * @head: Pointer to the head of the list
 *
 */
void free_listint(listint_t *head)
{
	/*value to hold the current element of list */
	listint_t *current;

	while (head != NULL)
	{
		/* Store the current node */
		current = head;
		/* move head to the next node */
		head = head->next;
		/* Free the memory of the current node*/
		free(current);

	}
}
