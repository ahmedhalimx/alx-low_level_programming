#include "main.h"

/**
 * set_bit - sets the bit's value at a given index to 1.
 *
 * @n: pointer
 * @index: index of the bit.
 *
 * Return: (1) on Success, (-1) otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}

