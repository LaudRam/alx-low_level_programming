#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to bit
 * @index: index of the bit you want to set, startinf from 0
 *
 * Return: 1 on Success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
