#include "function_pointers.h"

/**
 * print_name - print a given name
 *
 * @name: given name
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}

