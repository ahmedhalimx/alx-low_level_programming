#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints all integers in a list
 * and returns the number of nodes
 *
 * @h: an integer list argument
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t no_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		++no_nodes;
		h = h->next;
	}
	return (no_nodes);
}

