#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - checks if a string is a digit
 * @str: string input
 * Return: Always 0
 */

int is_digit(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int count = 1; /* starting from 1 to omit program name*/
	int sum = 0;

	while (count < argc)
	{
		if (is_digit(argv[count]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
