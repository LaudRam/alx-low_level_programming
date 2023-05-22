#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: substring
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *m = needle;

		while (*l == *m && *m != '\0')
		{
			l++;
			m++;
		}
		if (*m == '\0')
			return (haystack);
	}
	return (0);
}
