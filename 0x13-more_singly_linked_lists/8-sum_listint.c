#include "lists.h"

/**
 * sum_listint - Returns the sum of all data (n) of a listint_t linked list.
 * @head: Pointer to the head of the list
 *
 * Return: Sum of the data (n) of all nodes, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		/* Add the value of n to the sum */
		sum += current->n;
		/* Move to the next node */
		current = current->next;
	}
	/* Return the sum of all data (n) or0 if the list is empty */
	return (sum);
}

