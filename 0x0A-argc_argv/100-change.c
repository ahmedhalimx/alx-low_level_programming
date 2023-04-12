#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that calculates number of coins to make change
 *
 * @argc: number of arguments
 * @argv: values of arguments
 *
 * Return: (0) on Success, (1) on Failure
 */

int main(int argc, char *argv[])
{
	int value, steps;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	value = atoi(argv[1]);

	while (value != 0)
	{
		if (value >= 25)
			value -= 25;
		else if (value >= 10)
			value -= 10;
		else if (value >= 5)
			value -= 5;
		else if	(value >= 2)
			value -= 2;
		else
			value -= 1;

		++steps;
	}

	printf("%d\n", steps);
	return (0);
}

