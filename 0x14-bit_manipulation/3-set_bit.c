#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to bit
 * @index: index of the bit you want to set, starting from 0
 *
 * Return: 1 on Success, -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
