#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]); /*to convert to int*/
		y = atoi(argv[2]);

		printf("%d\n", x * y);
		return (0);
	}
	printf("Error\n");
	return (1);
}
