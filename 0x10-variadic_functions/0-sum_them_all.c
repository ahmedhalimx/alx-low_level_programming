#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the summation of given integers
 *
 * @n: number of integers
 *
 * Return: if n == 0 Returns (0), Else Returns the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int sum;

	unsigned int i;

	va_start(args, n);

	if (n == 0)
		return (0);

	i = 0;
	for (i = 0; i < n; i++)
	{
		int arg = va_arg(args, int);

		sum += arg;
	}

	va_end(args);

	return (sum);
}

