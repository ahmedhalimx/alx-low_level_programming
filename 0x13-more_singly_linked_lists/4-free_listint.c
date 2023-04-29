#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Deallocates a listint_t object on the heap
 *
 * @head: A pointer to the first node in the list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

	head = NULL;
}

