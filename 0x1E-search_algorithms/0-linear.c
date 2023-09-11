#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *	using the linear search algorith
 *
 * @array: pointer to the first element of array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located, else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i <= size - 1; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
