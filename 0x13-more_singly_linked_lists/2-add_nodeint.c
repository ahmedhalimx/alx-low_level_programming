#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a listint_t node at the beginning of a linked list
 *
 * @head: Pointer to a pointer to listint_t node
 * @n: Integer value for the new node
 *
 * Return: The new node's address on success, a NULL value otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}

