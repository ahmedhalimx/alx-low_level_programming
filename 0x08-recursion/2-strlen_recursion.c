#include "main.h"
/**
 * _strlen_recursion - returns the size of a string
 *
 * @s: string argument
 *
 * Return: The size of string.
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}

