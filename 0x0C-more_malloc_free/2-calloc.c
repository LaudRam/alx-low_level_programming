#include "main.h"
#include <stdlib.h>
/**
 * _memset - fills memory with a contant byte
 * @s: starting address of memory to be filled
 * @b: constant byte, desired value
 * @n: number of bytes, to be changed
 * Return: new array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: size of each element
 * Return: pointer to the allocated memory on success,
 * NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
