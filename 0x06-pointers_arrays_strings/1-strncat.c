#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: string to be appended to.
 * @src: string to append with.
 * @n: number of max bytes.
 *
 * Return: string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (src[y] != '\0' && y <= n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}

