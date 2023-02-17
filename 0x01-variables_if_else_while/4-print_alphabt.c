#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except q and e
 * Return: Always 0
 */
int main(void)
{
	char sc;

	for (sc = 'a'; sc <= 'z'; sc++)
	{
		if (sc != 'e' && sc != 'q')
			putchar(sc);
	}

	putchar('\n');

	return (0);
}
