#include "search_algos.h"

/**
 * print_array - prints a given array
 *
 * @array: array to be printed
 * @start: index to start at
 * @size: size of array
 */

void print_array(int *array, size_t start, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < size; ++i)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}

/**
 * binary_search - implements the binary search algorithm
 *
 * @array: array to search in for value
 * @size: array's size
 * @value: value to search for
 *
 * Return: value's corresponding index on success,
 *				(-1) otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int rs = size - 1, ls = 0;

	if (!array)
		return (-1);

	while (ls <= rs)
	{
		int middle_idx = ls + ((rs - ls) / 2);

		print_array(array, ls, rs);
		if (array[middle_idx] == value)
			return (middle_idx);
		else if (array[middle_idx] > value)
			rs = middle_idx - 1;
		else if (array[middle_idx] < value)
			ls = middle_idx + 1;
	}
	return (-1);
}
