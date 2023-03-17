#include <stdio.h>

/**
 * main - prints letters from z to a. Cause why not.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}

