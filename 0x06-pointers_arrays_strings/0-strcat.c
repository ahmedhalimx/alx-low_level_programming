#include <main.h>

/**
 *
 * _strcat : appends the scr string to dest string.
 *
 * @scr: string to append with.
 * @dest: string to append to.
 *
 * return: a pointer to the new string.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return dest;
}

