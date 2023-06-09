#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the product of two numbers
 *
 * @argc: Number of arguments
 * @argv: Values of arguments
 *
 * Return: (0) on Success, (1) on Failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

