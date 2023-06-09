#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 *
 * @head: a pointer to a pointer to an allocated memory on the
 * heap that represent a list_t object.
 *
 * @str: string to duplicate with
 *
 * Return: a pointer to the last node on success, NULL otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_node;
	return (new_node);
}
