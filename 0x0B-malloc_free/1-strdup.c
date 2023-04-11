#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 *
 * @str: string to be duplicated
 *
 * Return: (char *) on Success, (NULL) otherwise
 */

char *_strdup(char *str)
{
	char *strd;

	int x;

	if (str == NULL)
		return (NULL);

	x = 0;

	while (str[x] != '\0')
		x++;

	strd = malloc(sizeof(char) * (x + 1));

	if (strd == NULL)
		return (NULL);

	for (x = 0; str[x]; r++)
		strd[x] = str[x];

	return (strd);
}
