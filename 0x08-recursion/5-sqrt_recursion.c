#include "main.h"
/**
 * test_sqrt_recursion - recurses to find square root of num
 * @num: number
 * @i: iterator
 * Return: natural square root of number, -1 otherwise
 */

int test_sqrt_recursion(int num, int i)
{
	if ((i * i) > num)
	{
		return (-1);
	}
	else
	{
		if ((i * i) == num)
			return (i);
		else
			return (test_sqrt_recursion(num, i + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: natural square root
 * -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (test_sqrt_recursion(n, 0));
}
