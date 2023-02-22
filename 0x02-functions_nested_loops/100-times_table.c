#include "main.h"
/**
 * print_times_table - Function prints the n times table, starting with zero
 * @n: Value of the times table
 * if n is greater than 15 or less than 0 function should not print anything
 * Return: Always 0
 */

void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				k = i * j;
				if (k <= 99)
					_putchar(' ');
				if (k <= 9)
					_putchar(' ');
				if (k >= 100)
				{
					_putchar((k / 100) + '0');
					_putchar(((k / 10)) % 10 + '0');
				}
				else if (k <= 99 && k >= 10)
				{
					_putchar((k / 10) + '0');
				}
				_putchar((k % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
