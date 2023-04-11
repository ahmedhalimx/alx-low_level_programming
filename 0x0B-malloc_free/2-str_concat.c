#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: (char *)
 */

char *str_concat(char *s1, char *s2)
{
	char *strr;
	int i1, i2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i1 = i2 = 0;
	while (s1[i1] != '\0')
		i1++;

	while (s2[i2] != '\0')
		i2++;

	strr = malloc(sizeof(char) * (i1 + i2 + 1));

	if (strr == NULL)
		return (NULL);

	i1 = i2 = 0;
	while (s1[i1] != '\0')
	{
		strr[i1] = s1[i1];
		i1++;
	}

	while (s2[i2] != '\0')
	{
		strr[i1] = s2[i2];
		++i1;
		++i2;
	}

	strr[i1] = '\0';

	return (strr);
}

