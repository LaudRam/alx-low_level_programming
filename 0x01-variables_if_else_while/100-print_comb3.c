#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all possible different combinations of two digits
 * Numbers must be separated by a comma, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order
 * Return: ALways 0
 */
int main(void)
{
	int x;
	int y = 0;

	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			if (y != x && y < x)
			{
				putchar('0' + y);
				putchar('0' + x);

				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			x++;
		}
		y++;
	}

	putchar('\n');
	return (0);
}
