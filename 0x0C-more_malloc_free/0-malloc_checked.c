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
	if (malloc(sizeof(b)) == NULL)
		exit(98);
	else
		return (malloc(sizeof(b)));
}
