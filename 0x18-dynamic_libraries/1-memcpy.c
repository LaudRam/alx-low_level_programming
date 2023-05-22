#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: Destination, memory area
 * @src: Source, memory area
 * @n: number of bytes
 * Return: copied memory with n byte changes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
