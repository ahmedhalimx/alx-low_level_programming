#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees an allocated memory on the heap for a list
 *
 * @head: a pointer that points to the first node in the list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(head->str);
		free(head);
		head = tmp->next;
	}
}

