#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * main - prints the summation of 'n' numbers
 *
 * @argc: Number of arguments
 * @argv: Values of arguments
 *
 * Return: (0) on Success, (1) on Failure
 */
int main(int argc, char *argv[])
{
	int i, j;

	j = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int tmp;

			for (tmp = 0; tmp < strlen(argv[i]); tmp++)
			{
				if (!(isdigit(argv[i][tmp])))
				{
					printf("Error\n");
					return (1);
				}
			}
			j += atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	else
		printf("0\n");
	return (0);
}

