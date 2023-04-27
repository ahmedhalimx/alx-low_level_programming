#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of the list
 *
 * @head: pointer to first element in the list
 * @str: string to duplicate with
 *
 * Return: A pointer to the last node on success, or a NULL pointer otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = malloc(strlen(str) + 1);

	new_node->len = strlen(str);
	new_node->str = strdup(str);

	while ((*head)->next != NULL)
		(*head) = (*head)->next

	(*head)->next = new_node;
	return (new_node);
}

