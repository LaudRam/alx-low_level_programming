#include "main.h"

int check_pali(char *s, int i, int len);

/**
 * _strlen_recursion - checks the length of a string
 * @s: input string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}

/**
 * check_pali - checks string recursively for palindrome
 * @s: string
 * @i: iterator
 * @len: length of string
 * Return: 1 if palindrome, 0 otherwise
 */

int check_pali(char *s, int i, int len)
{
	if (len > 0)
	{
		if (s[i] != s[len])
		{
			return (0);
		}
		else if (s[i] == s[len])
		{
			return (check_pali(s, i + 1, len - 1));
		}
		else
			return (1);
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 * Return: 1 if s is a palindrome
 * 0 otherwise
 * An empty string is a palindrome
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
		return (check_pali(s, 0, _strlen_recursion(s) - 1));
}
