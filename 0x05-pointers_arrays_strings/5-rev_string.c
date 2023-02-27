#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: Nothing
 */

void rev_string(char *s)
{
	char r = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		r = s[i];
		s[i] = s[c];
		s[c] = r;
	}
}
