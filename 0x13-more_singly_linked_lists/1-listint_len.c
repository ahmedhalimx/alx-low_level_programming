#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of nodes in a linked list
 *
 * @h: A linked list object
 *
 * Return: The number of nodes in a given list
 */

size_t listint_len(const listint_t *h)
{
	size_t no_nodes = 0;

	while (h)
	{
		++no_nodes;
		h = h->next;
	}

	return (no_nodes);
}

