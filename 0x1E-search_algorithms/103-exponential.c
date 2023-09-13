#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where the value was found or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx;
	int low;

	if (array == NULL || size == 0)
		return (-1);

	for (idx = 1; idx < size; idx = idx * 2)
	{
		if (array[idx] > value)
			break;
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
	}
	low = idx / 2;
	if (idx >= size)
		idx--;
	size = idx - low;
	printf("Value found between indexes [%d] and [%lu]\n", low, idx);
	return (b_search(array, size, low, idx, value));
}

/**
 * b_search - Searches for a value in an array by splitting the array in half
 * @array: list of integer numbers sorted in an ascending order
 * @size: total amount of numbers in the array
 * @value: element that the algorithm is trying to find
 * @low: lowest point in the array
 * @high: highest point of the array
 * Return: index in which the value is located, else -1
 */
int b_search(int *array, size_t size, int low, int high, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	if (size == 1)
	{
		print_array(array, low, high);
		if (array[size] == value)
			return (size);
		return (-1);
	}
	return (finder(array, size, low, high, value));
}
