#include "lists.h"

/**
 * list_len - return the length of a list
 *
 * @h: a list_t argument
 *
 * Return: the length of a list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		++len;
	}

	return (len);
}

