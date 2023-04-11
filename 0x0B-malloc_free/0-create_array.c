#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that allocates an array on the heap
 *
 * @size: number of times to allocate
 * @c: object to allocate for
 *
 * Return: an array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arar;

	arar = (char *)malloc(size * sizeof(c));

	if (arar == (NULL) | size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arar[i] = c;
	}

	return (arar);
}

