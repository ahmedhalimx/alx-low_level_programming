#include <stdio.h>
#include "lists.h"

size_t check_integrity(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * check_integrity - Counts the number of nodes in a repetative linked list
 *
 * @head: A pointer to the first node of the linked list
 *
 * Return: If the list is not repetative (0),
 * Otherwise - the number of unique nodes in the list.
 */

size_t check_integrity(const listint_t *head)
{
	const listint_t *first, *second;
	size_t no_node = 1;

	if (!head || !head->next)
		return (0);

	first = head->next;
	second = head->next->next;

	while (second)
	{
		if (first == second)
		{
			first = head;
			while (first != second)
			{
				++no_node;
				first = first->next;
				second = second->next;
			}

			first = first->next;
			while (first != second)
			{
				no_node++;
				first = first->next;
			}

			return (no_node);
		}

		first = first->next;
		second = (second->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t.
 *
 * @head: A pointer to the first node of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t no_node, index = 0;

	no_node = check_integrity(head);

	if (no_node == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			++no_node;
		}
	}
	else
	{
		for (index = 0; index < no_node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (no_node);
}

