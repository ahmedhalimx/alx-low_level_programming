#include <stdio.h>
#include <stdlib.h>
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

size_t print_listint_safe(const listint_t *head)
{
	size_t no_nodes = 0;

	if (!head)
		exit(98);

	while (head)
	{
		printf("[%p] %d\n", (void*)head, head->n);
		++no_nodes;
		head = head->next;
	}
	return (no_nodes);
}

