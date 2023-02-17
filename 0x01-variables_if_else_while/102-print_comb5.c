#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of 0 and 1
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int y;
	int z;

	int x2;
	int y2;
	int z2;

	while (x <= 98)
	{
		y = (x / 10 + '0');
		z = (x % 10 + '0');
		x2 = 0;

		while (x2 <= 99)
		{
			y2 = (x2 / 10 + '0');
			z2 = (x2 % 10 + '0');

			if (x < x2)
			{
				putchar(y);
				putchar(z);
				putchar(' ');
				putchar(y2);
				putchar(z2);

				if (x != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			x2++;
		}
		x++;
	}

	putchar('\n');
	return (0);
}
