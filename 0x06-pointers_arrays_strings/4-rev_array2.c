#include "main.h"
/**
 * reverse_array - a function that reverses an array
 * @a: array object
 * @n: size of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	n--;

	i = 0;
	for (i; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}

