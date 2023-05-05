#include "main.h"

/**
 * clear_bit - sets the bit's at a given index to 0.
 *
 * @n: pointer
 * @index: index of the bit.
 *
 * Return: (1) on Success,(-1) Otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}

