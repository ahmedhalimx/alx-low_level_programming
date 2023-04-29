#include "lists.h"

/**
 * sum_listint - Calculates the sum of all node's data ina a given list
 *
 * @head: Pointer to the first element in the list
 *
 * Return: (0) if the list is empty, the sum otherwise.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

