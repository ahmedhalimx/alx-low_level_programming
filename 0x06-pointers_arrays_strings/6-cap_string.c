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

		if (i == 0)
		{
			s[i] = s[i] - 32;
		}

		switch (s[i - 1])
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
				s[i] = s[i] - 32;
				break;
		}
	}
	return (s);
}

