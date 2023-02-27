#include "main.h"

/**
 * puts_half - prints second half of a string
 * if number of characters is odd, print the last n characters
 * where n = ((length_of_the_string - 1) / 2)
 * @str: string input
 */

void puts_half(char *str)
{
	int len = 0;
	int n;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for ((n = (len - 1) / 2); (n < len - 1); i++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
