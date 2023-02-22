#include <stdio.h>
/**
 * main - main function
 * Return: Always 0
 */

int main(void)
{
	unsigned long int i;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int a1;
	unsigned long int a2;
	unsigned long int b1;
	unsigned long int b2;

	printf("%lu", a);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", b);
		b += a;
		a = b - a;
	}

	a1 = (a / 1);
	a2 = (a % 1);
	b1 = (b / 1);
	b2 = (b % 1);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", b1 + (b2 / 1));
		printf("%lu", b2 % 1);
		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
	}
	printf("\n");
	return (0);
}
