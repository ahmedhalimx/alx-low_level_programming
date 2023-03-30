#include <string.h>
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
char *_strcat(char *dest, char *src)()
{
	char *result;

	result =  strcat(dest,src);

	return result;
}
