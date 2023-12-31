#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of listint_t
 * @head: head pointer for first node
 * @n: data to insert in new node.
 *
 * Return: address on Success and NULL on failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
