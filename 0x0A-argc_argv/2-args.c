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
	int i;

	i = 0;
	for (i; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}

	return (0);
}
