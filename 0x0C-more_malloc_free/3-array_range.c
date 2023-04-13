#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers on the heap
 * 
 * @min: minimum range of integers
 * @max: maximum range of integers
 *
 * Return: an array on success, NULL pointer on failure
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * max - min + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; ++i)
	{
		p[i] = min;
		++min;
	}

	return (p);
}

