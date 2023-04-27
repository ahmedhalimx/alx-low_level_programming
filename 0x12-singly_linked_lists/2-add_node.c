#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function to add a node
 *
 * @head: pointer to first node in a list
 * @str: string to duplicate with
 *
 * Return: On success a pointer to the first node, a NULL address other wise 
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	
	if (new_node == NULL)
		return (NULL);

	new_node->str = malloc(strlen(str) + 1);

	new_node->len = (unsigned int)strlen(str);
	new_node->str = strdup(str);
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}

