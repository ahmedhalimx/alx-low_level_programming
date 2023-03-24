#include "main.h"
/**
 * _isdigit - check if a number is between 0 and 9.
 * @c: integer to be checked
 *
 * Return: (1) on success, (0) on failure.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

