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
