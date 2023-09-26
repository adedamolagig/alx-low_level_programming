#include "lists.h"

/**
 * print_listint - Prints all the elements of listint_t list.
 * @h - pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	/* Initialize a counter to count nodes*/
	size_t count = 0;

	/* loppe through */
	while (h != NULL)
	{
		/* Prints the data in the current node */
		printf("%d \n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
