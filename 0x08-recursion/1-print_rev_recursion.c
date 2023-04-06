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
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	
	if (i != 0)
	{
		_putchar(s[i]);
		_print_rev_recursion(i - 1);
	}
}
