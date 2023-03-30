#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list list_t
 * @head: pointer to the head of the list list_t
 * @str: string to be added to the list list_t
 *
 * Return: address of the new element, NULL if function fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dupli_str;
	int len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	dupli_str = strdup(str);

	if (dupli_str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dupli_str;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
