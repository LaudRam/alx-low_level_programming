#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: pointer to the newly created array,
 * NULL on failure
 */

int *array_range(int min, int max)
{
	int i;
	int size;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
