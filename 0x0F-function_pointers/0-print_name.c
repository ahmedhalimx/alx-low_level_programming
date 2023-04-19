#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: name to print
 * @f: a pointer to a function that prints a string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (void);

	f(name);
}
