#include "main.h"

/**
 * get_endianness - checks if a machine is little endian or big endian
 *
 * Return: (0) on big endian, (1) on little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

