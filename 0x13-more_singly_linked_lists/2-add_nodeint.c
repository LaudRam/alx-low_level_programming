#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list listint_t
 * @head: pointer to the address of the head of the list listint_t
 * @n: number new node will contain
 *
 * Return: address of the new element,
 *	or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
