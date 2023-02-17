#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in ascending order
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
