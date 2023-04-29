#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Deallocates a listint_t object on the heap
 *
 * @head: A pointer to a pointer to the first node in the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while ((*head))
	{
		tmp = (*head);
		free((*head));
		(*head) = tmp->next;
	}

	head = NULL;
}

