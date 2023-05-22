#include "main.h"

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
