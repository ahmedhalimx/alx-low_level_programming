#include <stdio.h>

/**
 * main - output { char ch | ch != 'q' or ch != 'e' }
 * 
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

