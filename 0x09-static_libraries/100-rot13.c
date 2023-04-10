#include "main.h"
/**
 * rot13 - translate s to rot13
 *
 * @s: string argument
 *
 * Return: @s
 */
char *rot13(char *s)
{
	int x;
	int y;
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == normal[y])
			{
				s[x] = rot13[y];
				break;
			}
		}
	}
	return (s);
}
