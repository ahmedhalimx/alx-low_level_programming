#include "search_algos.h"

/**
 * jump_search - implements the jump search algorithm
 *
 * @array: array to search in
 * @size: array's size
 * @value: value to search for in array
 *
 * Return: the value's index in the array on success,
 *				otherwise (-1)
 */

int jump_search(int *array, size_t size, int value)
{
	const size_t jump_step = sqrt(size);
	size_t i = 0, start_indx = 0, last_indx = 0;

	if (!array || size == 0)
		return (-1);

	while (array[last_indx] < value && last_indx < size)
	{
		printf("Value checked array[%lu] = [%d]\n",
				last_indx, array[last_indx]);
		start_indx = last_indx;
		last_indx += jump_step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			start_indx, last_indx);

	for (i = start_indx; array[i] <= value && i <= last_indx; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
