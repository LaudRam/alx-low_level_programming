#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds new node at the end of a list list_t
 * @head: pointer to the head of the list list_t
 * @str: string to be added to the list list_t
 *
 * Return: address of the new element, or NULL if function fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *dup;
	list_t *new, *last;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	dup = strdup(str);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}
	return (*head);
}
