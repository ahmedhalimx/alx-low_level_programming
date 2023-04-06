#include "main.h"
/**
 * _print_rev_recursion - print a string reversed with recursion
 *
 * @s: string argument
 *
 * return: (void)
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(i + 1);
	}
	else
	{
		_putchar(*s);
		*s = '\0';
	}
}

