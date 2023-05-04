#include "main.h"

/**
 * get_bit - returns the bit's value at a given index.
 *
 * @n: unsigned long int argument.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (n == 0 && index < 64)
		return (0);

	for (bit = 0; bit <= 63; n >>= 1, bit++)
	{
		if (index == bit)
		{
			return (n & 1);
		}
	}

	return (-1);
}

