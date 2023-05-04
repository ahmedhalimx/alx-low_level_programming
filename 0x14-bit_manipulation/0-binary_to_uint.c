#include "main.h"

/**
 * binary_to_uint - converts a binary number to decimal number
 *
 * @b: a string argument that represent the binary number
 *
 * Return: decimal on success, (0) otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != NULL; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}

	return (decimal);
}

