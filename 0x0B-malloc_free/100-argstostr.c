#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatinates command arguments
 * @ac: arg count
 * @av: args value
 * Return: (char *)
 */

char *argstostr(int ac, char **av)
{
	int i, q;
	int w = 0, a = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (q = 0; av[i][q]; q++)
			a++;
	}

	a += ac;

	str = malloc(sizeof(char) * a + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (q = 0; av[i][q]; q++)
		{
			str[w] = av[i][q];
			w++;
		}

		if (str[w] == '\0')
			str[w++] = '\n';
	}
	return (str);
}

