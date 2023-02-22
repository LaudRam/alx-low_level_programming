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

	printf("%lu", a);
	for (i = 1; i < 85; i++)
	{
		printf(", %lu", b);
		b += a;
		a = b - a;
	}

	printf("\n");
	return (0);
}
