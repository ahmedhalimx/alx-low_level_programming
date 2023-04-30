#include "lists.h"

/**
 * reverse_listint - Reverses a given linked list
 *
 * @head: Pointer to a pointer to the first element of a linked list
 *
 * Return: Always returns the first node's address.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}

	(*head) = prev;

	return (*head);
}

