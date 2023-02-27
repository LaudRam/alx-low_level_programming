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

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
