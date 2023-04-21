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
	unsigned int i = 0;

	char *s, *silly = "";

	va_list arguments;

	va_start(arguments, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case ('i'):
					printf("%s%i", silly, va_arg(arguments, int));
					break;
				case ('f'):
					printf("%s%f", silly, va_arg(arguments, double));
					break;
				case ('c'):
					printf("%s%c", silly, va_arg(arguments, int));
					break;
				case ('s'):
					s = va_arg(arguments, char *);

					if (s == NULL)
						s = "(nil)";
					printf("%s%s", silly, s);
					break;
				default:
					i++;
					continue;
			}
			silly = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arguments);
}
