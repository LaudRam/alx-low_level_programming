#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number,
 *	or 0 if b is NULL, or there are chars in b that are not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int size;

	if (!b)
		return (0);
	for (size = 0; b[size]; size++)
	{
		if (b[size] < '0' || b[size] > '1')
			return (0);
		num = 2 * num + (b[size] - '0');
	}
	return (num);
}
