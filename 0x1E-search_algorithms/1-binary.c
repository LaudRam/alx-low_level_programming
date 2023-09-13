#include "search_algos.h"

/**
 * print_array - Prints an array of integers separated by a comma and space
 * @array: list of integer numbers sorted in an ascending order
 * @low: low end of the array
 * @high: high end of the array
 */

void print_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	while (low < high)
	{
		printf("%d, ", array[low]);
		low++;
	}
	printf("%d\n", array[low]);
}

/**
 * finder - Finds a value in an array
 * @array: list of integer numbers sorted in an ascending order
 * @size: total amount of numbers in the array
 * @value: element that the algorithm is trying to find
 * @low: low end of the array
 * @high: high end of the array
 * Return: The index in which the value is located. Or if it does not exits
 * or array is NULL -1
 */

int finder(int *array, size_t size, size_t low, size_t high, int value)
{
	int mid;

	mid = size / 2 + low;

	print_array(array, low, high);

	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
	{
		low = mid + 1;
		size = high - low;
	}
	else if (array[mid] > value)
	{
		high = mid - 1;
		size = mid - low;
	}
	if (size == 0 && array[mid + 1] != value)
	{
		print_array(array, low, high);
		return (-1);
	}
	return (finder(array, size, low, high, value));
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *	using the binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: index where value is located, else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;

	if (array == NULL || size == 0)
		return (-1);

	size = size - 1;
	low = 0;
	high = size;
	if (size == 0)
	{
		print_array(array, low, high);
		if (array[size] == value)
			return (size);
		return (-1);
	}
	return (finder(array, size, low, high, value));
}