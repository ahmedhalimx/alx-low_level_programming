#include "main.h"

/**
 * create_array - a function that allocates an array on the heap
 *
 * @size: number of times to allocate
 * @c: object to allocate for
 *
 * Return: (char*) an array.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		retrun(NULL);

	return ((char *)malloc(size * sizeof(c)));
}

