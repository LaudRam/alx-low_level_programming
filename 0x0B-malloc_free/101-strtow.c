#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * count_word - counts the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
	int flag = 0;
	int w = 0;
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * strtow - splits a string into words
 * @str: input string
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **arr, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	arr = (char **) malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				arr[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	arr[k] = NULL;

	return (arr);
}
