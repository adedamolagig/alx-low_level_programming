#include "lists.h"

/**
 * listint_len - Function returns the number of elements in a linked listint_t
 * @h: pointer to head of list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;/* keeps track of the list count */
	/* this loop shoudl count each element and move on to the next */
	while (h != NULL)
	{
		count++;
		/* holds value for the new h on the next iteration*/
		h = h->next;
	}
	return (count);
}
