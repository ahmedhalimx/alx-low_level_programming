#include "main.h"
/**
 * cap_string - captalize whole string
 * @s: string argument
 *
 * Return: @s;
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= 'a' && s[i] <= 'z'))
		{
			continue;
		}

		switch (s[i])
		{
			case (' '):
			case ('\t'):
			case ('\n'):
			case (','):
			case (';'):
			case ('!'):
			case ('.'):
			case ('?'):
			case ('"'):
			case ('('):
			case (')'):
			case ('{'):
			case ('}'):
				s[i + 1] = s[i + 1] - ('a' - 'A');
				break;
		}
	}
	return (s);
}

