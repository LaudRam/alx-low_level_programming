#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all possible different combinations of three digits
 * Numbers must be separated by a comma, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z = 0;

	while (z < 10)
	{
		y = 0;
		while (y < 10)
		{
			x = 0;
			while (x < 10)
			{
				if (x != y && y != z && z < y && y < x)
				{
					putchar('0' + z);
					putchar('0' + y);
					putchar('0' + x);

					if (x + y + z != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				x++;
			}
			y++;
		}
		z++;
	}

	putchar('\n');
	return (0);
}
