#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the head of the list
 * @n: Integer value for the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;/* Temporarily store the head pointer*/
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	/* check if memory allocation failed */
	if (new_node == NULL)
		return (NULL);
	/* Set the value of the new node and make it the last node*/
	new_node->n = n;
	/* The new node will be the last node, so next is NULL */
	new_node->next = NULL;
	/* if the list is empty,make the new node the head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Run through the list to find the last node */
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/* Update the next pointer of the last node to the new node */
	temp->next = new_node;
	/* return the address of the new node */
	return (new_node);
}
