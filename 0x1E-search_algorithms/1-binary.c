#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *	using the binary search algorith
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: index where value is located, else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, a, z;

	if (array == NULL)
		return (-1);

	for (a = 0, z = size - 1; z >= a;)
	{
		printf("Searching in array: ");

		for (i = z; i < z; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = a + (z - a) / 2;

		if (array[i] == value)
			return (i);

		if (array[i] > value)
			z = i - 1;
		else
			a = i + 1;
	}
	return (-1);
}
