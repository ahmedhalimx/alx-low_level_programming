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
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
