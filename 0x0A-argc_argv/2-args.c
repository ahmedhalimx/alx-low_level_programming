#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments a program recives
 *
 * @argc: Number of arguments
 * @argv: Values of arguments
 *
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	while (argc != 0)
	{
		printf("%s\n", argv[argc - 1]);
	}

	return (0);
}

