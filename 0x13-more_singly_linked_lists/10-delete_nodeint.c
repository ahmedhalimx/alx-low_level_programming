#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at a certain index
 *
 * @head: Pointer to a pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: (1) on success, (-1) otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *_head = *head;
	listint_t *tmp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(_head);
		return (1);
	}

	while (i < index - 1)
	{
		if (!_head || !(_head->next))
			return (-1);
		_head = _head->next;
		i++;
	}


	tmp = _head->next;
	_head->next = tmp->next;
	free(tmp);

	return (1);
}

