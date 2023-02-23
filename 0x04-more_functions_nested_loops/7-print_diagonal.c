#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int j;
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < j; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
