#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length of string
 * @s: string to evaluate
 * Return: Length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	*(dest + i) = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 * Return: new struct dog, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;

	pup = malloc(sizeof(dog_t));
	if (pup == NULL)
		return (NULL);

	pup->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (pup->name == NULL)
	{
		free(pup);
		return (NULL);
	}

	pup->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (pup->owner == NULL)
	{
		free(pup->name);
		free(pup);
		return (NULL);
	}

	_strcpy(pup->name, name);
	_strcpy(pup->owner, owner);
	pup->age = age;

	return (pup);
}
