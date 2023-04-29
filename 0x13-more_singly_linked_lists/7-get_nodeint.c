#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Searches for a specific node and returns it's address
 *
 * @head: A pointer to the first node in the list
 * @index: The location at which the node exists in the list
 *
 * Return: The addres of the specific node on success, NULL otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t counter = 0;

	while (head && counter < index)
	{
		head = head->next;
		++counter;
	}
	return (head ? head : NULL);
}

