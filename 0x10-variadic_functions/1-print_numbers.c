#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints integers sperated by a sperator
 *
 * @separator: string printed between integers
 * @n: The number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i <= (n - 1); ++i)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}

