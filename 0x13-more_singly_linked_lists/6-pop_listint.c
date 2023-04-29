#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the first element pointed by head
 *
 * @head: A pointer to a pointer to a listint_t object
 *
 * Return: The deleted node's data (n) on success, (0) otherwise 
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp = (*head)->next;

	if(!(*head))
		return(0);

	
	n = (*head)->n;
	free((*head));
	(*head) = tmp;

	return (n);
}

