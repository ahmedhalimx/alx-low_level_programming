#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a specific index
 * at a linked list
 *
 * @head: Pointer to a pointer to the first node in a list
 * @idx: Position at which the new node will be added to
 * @n: Integer value for the new node's data
 *
 * Return: The new node's memory address on success, NULL value otherwise
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}

