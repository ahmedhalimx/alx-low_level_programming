#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - returns a pointer to new allocated memory
 * if malloc was successful
 *
 * @b: size of memory to allocate
 *
 * Return: pointer to new allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
