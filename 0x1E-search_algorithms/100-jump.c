#include "search_algos.h"

/**
 * square_root - computes the square root of a number
 *
 * @num: integer argument
 *
 * Return: square root of @num
 */

size_t square_root(size_t num)
{
	size_t result = 0, bit = 1 << 30;

	while (bit > num)
		bit >>= 2;

	while (bit != 0)
	{
		if (num >= result + bit)
		{
			num -= result + bit;
			result = (result >> 1) + bit;
		}
		else
		{
			result >>= 1;
		}
		bit >>= 2;
	}
	return (result);
}

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
	const size_t jump_size = square_root(size);
	size_t i, srch_indx = 0;

	while (array[srch_indx] < value && srch_indx < size)
	{
		printf("Value checked array[%lu] = [%d]\n",
				srch_indx, array[srch_indx]);
		srch_indx += jump_size;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			(srch_indx - jump_size), srch_indx);

	for (i = srch_indx - jump_size; i < size && i <= srch_indx; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
