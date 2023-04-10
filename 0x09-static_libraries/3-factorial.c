#include "main.h"
/**
 * factorial - return the factoria of a number by recursion
 *
 * @n: integer arrgument
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
