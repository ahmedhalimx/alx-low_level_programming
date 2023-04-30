#include "lists.h"

/**
 * find_listint_loop - finds the repeating sequence in a linked list
 *
 * @head: a listint_t object
 *
 * Return: On success an Address of the node at which the sequence occur,
 * NULL otherwise
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *last = head;

	if (!head)
		return (NULL);

	while (first && last && last->next)
	{
		last = last->next->next;
		first = first->next;
		if (last == first)
		{
			first = head;
			while (first != last)
			{
				first = first->next;
				last = last->next;
			}
			return (last);
		}
	}

	return (NULL);
}

