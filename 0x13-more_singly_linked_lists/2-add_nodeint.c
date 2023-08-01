#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head:pointer to the head of the list
 * @n: Integer value for the new node
 *
 * Return: new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Declare new node */
	listint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	/* memory allocation test */
	if (new_node == NULL)
		return (NULL);

	/* Set the value of the new node and update the next pointer */
	new_node->n = n;
	/* The next pointer points to the current head*/
	new_node->next = *head;
	/* Update the head pointer to point to the new node */
	*head = new_node;/* new node also becomes new head here*/
	return (new_node);
}
