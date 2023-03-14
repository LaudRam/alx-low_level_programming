#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * and initialises it with a specific character
 * @size: size to be allocated
 * @c: character to initialise array
 * Return: a pointer to an array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	arr = (char *)(malloc(size * sizeof(char)));

	if (size == 0)
		return (NULL);

	if (!arr)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
