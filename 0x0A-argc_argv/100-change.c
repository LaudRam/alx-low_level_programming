#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for given value
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, num, result;
	int coins[] = {25, 10, 5, 2, 1};

	num = atoi(argv[1]);
	result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			result++;
			num = num - coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
