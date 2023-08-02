#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Double pointer to the head of the list
 * @idx: Index of the list where the new node should be added (starting at 0)
 * @n: Data (n) to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *new_node;
	/*Handle the case of inserting at the beginning of the list*/
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* Traverse the list to find the node at index idx - 1 */
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	/*Check if the node at index idx - 1 exists*/
	if (current == NULL || current->next == NULL)
		return (NULL);
	/*Create a new node and insert it between the current node and the next node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}

