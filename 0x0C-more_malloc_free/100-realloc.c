#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a realloc() clone
 *
 * @ptr: pointer to area in memory
 * @old_size: old size
 * @new_size: new size
 *
 * Return: a pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size != 0 && ptr == NULL)
	{
		newptr = malloc(new_size);
		return (newptr);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size > old_size)
	{
		newptr = malloc(new_size);
		for (i = 0; ptr[i] != '\0'; ++i)
			newptr[i] = ptr[i];
	}
	else
	{
		newptr = malloc(new_size);
		for (i = 0; i < new_size; ++i)
			newptr[i] = ptr[i];
	}

	free(ptr);
	return (newptr);
}

