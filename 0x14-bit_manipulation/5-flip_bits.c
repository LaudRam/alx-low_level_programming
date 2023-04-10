#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 *		to flip to get fro one number to another
 * @n: first number
 * @m: number to flip to
 *
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a, b;
	unsigned long int diff, output;

	a = 0;
	output = 1;
	diff = n ^ m;

	for (b = 0; b < (8 * sizeof(unsigned long int)); b++)
	{
		if (output == (diff & output))
			a++;
		output <<= 1;
	}
	return (a);
}
