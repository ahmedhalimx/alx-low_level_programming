#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Deallocates a linked list
 *
 * @h: Pointer to a pointer to the first node in the linked list
 *
 * Return: The size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t list_size = 0;
	listint_t *temp = NULL;
	int p_difference = 0;

	if (!h || !(*h))
		return (0);

	while (*h)
	{
		p_difference = (*h) - (*h)->next;
		if (p_difference > 0)
		{
			temp = (*h)->next;
			free(*h);
			(*h) = temp;
			++list_size;
		}
		else
		{
			free(*h);
			*h = NULL;
			++list_size;
			break;
		}
	}

	(*h) = NULL;
	return (list_size);
}

