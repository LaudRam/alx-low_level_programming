#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_len - gets length of a string
 * @str: input string
 * Return: length on success, 1 on error
 */

int str_len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		return (1);

	return (i + 1);
}

/**
 * str_concat - joins two strings
 * @s1: first string input
 * @s2: second string input
 * Return: concat of s1 and s2,
 * NULL on error
 */

char *str_concat(char *s1, char *s2)
{
	int s1_size, s2_size, j, k;
	char *ptr;

	s1_size = str_len(s1);
	s2_size = str_len(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = (char *) malloc(((s1_size + s2_size) - 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
		ptr[j] = s1[j];

	for (k = 0; s2[k] != '\0'; k++, j++)
		ptr[j] = s2[k];

	ptr[j] = '\0';

	return (ptr);
}
