#include <stdio.h>
#include <stdlib.h>
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

	if (argc == 1)
		printf("0\n");
	else
	{
		j = 0;
		for (i = 1; i < argc; i++)
		{
			if (isdigit(atoi(argv[i])))
			{
				j += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", j);
	}
	return (0);
}

