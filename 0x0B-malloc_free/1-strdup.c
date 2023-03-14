#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: pointer to the duplicated string on success,
 * NULL on error
 */

char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *ptr;

	ptr = (char *)malloc((size + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	{
		if (ptr == NULL)
			return (NULL);

		for (i = 0; str[i] != '\0'; i++)
			ptr[i] = str[i];

		ptr[i] = '\0';
	}
	return (ptr);
}
