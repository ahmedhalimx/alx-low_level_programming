#include <stdio.h>
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
	
	i = 0;
	for (i; i < argc; i++)
	{
		if (isdigit(argv[i]))
			j += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", j);

	return (0);
}
