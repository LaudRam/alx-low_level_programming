#include "main.h"
/**
 * test_is_prime_number - recurses to find prime number
 * @num: input number
 * @i: iterator, possible factor of num
 * Return: 1 if num is prime, 0 otherwise
 */

int test_is_prime_number(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (test_is_prime_number(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks for prime numbers
 * @n: input integer
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
	return (test_is_prime_number(n, 2));
	}
}
