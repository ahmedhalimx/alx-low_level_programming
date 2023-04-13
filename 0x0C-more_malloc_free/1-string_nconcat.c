#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - returns a concatinated version of s1 and s2
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to read from s2
 *
 * Return: a string on success, NULL pointer on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int i, j;

	if (n >= strlen(s2))
		n = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	str = malloc(strlen(s1) + n + 1);

	if (str == NULL || n < 0)
		return (NULL);

	i = 0;
	while (i < strlen(s1))
	{
		str[i] = s1[i];
		++i;
	}

	j = 0;
	while (j < n && i < (strlen(s1) + n))
	{
		str[i] = s2[j];
		++i;
		++j;
	}

	str[i] = '\0';

	return (str);
}

