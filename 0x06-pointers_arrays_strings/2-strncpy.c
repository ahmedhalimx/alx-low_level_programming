#include <main.h>

/**
 * _strncpy - a function that copies the src string to dest string
 * @src: string to copy with
 * @dest: string to copy to
 * @n: maximum bytes 'chars' to read.
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
