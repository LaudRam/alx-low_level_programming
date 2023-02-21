#include "main.h"
/**
 * print_last_digit - Function prints last digit of a number
 * @e: Parameter to be checked
 * Return: i
 */

int print_last_digit(int e)
{
	int i;

	i = e % 10;
	if (e < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
