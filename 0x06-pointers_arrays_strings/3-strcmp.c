#include "main.h"
/**
 * _strcmp - a function that works exactly like strcmp
 * @s1: first string
 * @s2: second string
 *
 * Return: (0) on equal,(-1) if s2 > s1,(1) if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (0);
}

