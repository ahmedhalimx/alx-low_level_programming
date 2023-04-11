#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that creates a grid of integers
 * @width: width of grid
 * @height: height of grid
 * Return: (char **)
 */

int **alloc_grid(int width, int height)
{
	int **arar;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arar = malloc(sizeof(int *) * height);

	if (arar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arar[i] = malloc(sizeof(int) * width);
		if (arar[i] == NULL)
		{
			while (i >= 0)
			{
				free(arar[i]);
				--i;
			}
			free(arar);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arar[i][j] = 0;
	}
	return (arar);
}

