#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: list of format specifiers
 */

void print_all(const char *const format, ...)
{
	unsigned int i;

	char *s;

	va_list arguments;

	va_start(arguments, format);

	if (format)
		while (format[i])
		{
			switch (format[i])
			{
				case ('i'):
					printf("%i", va_arg(arguments, int));
					break;
				case ('f'):
					printf("%f", va_arg(arguments, double));
					break;
				case ('c'):
					printf("%c", va_arg(arguments, int));
					break;
				case ('s'):
					s = va_arg(arguments, char *);

					if (s == NULL)
						s = "(nil)";
					printf("%s", s);
					break;
				default:
					i++;
					continue;
			}
			printf(", ");
			i++;
		}
	printf("\n");
	va_end(arguments);
}
