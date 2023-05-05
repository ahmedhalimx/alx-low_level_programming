#include "main.h"

/**
 * flip_bits - returns the number of bits needed to change
 * in order to get the second number from the first number
 *
 * @n: first number.
 * @m: second number.
 *
 * Return: Number of bits needed to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int no_bits;

	for (no_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			no_bits++;
	}

	return (no_bits);
}

