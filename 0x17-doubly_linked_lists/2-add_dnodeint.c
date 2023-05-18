#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list dlistint_t
 * @head: pointer to head of list
 * @n: value to add to new node
 *
 * Return: address of new node, otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
