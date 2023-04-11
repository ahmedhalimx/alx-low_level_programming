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
	int i;
	char *strd;

	strd = malloc(sizeof(str));

	if (strd == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		strd[i] = str[i];
		++i;
	}

	return (strd);
}
