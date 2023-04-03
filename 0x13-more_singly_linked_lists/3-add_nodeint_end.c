#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list listint_t
 * @head: pointer to the address of the head of list listint_t
 * @n: number the new node will contain
 *
 * Return: address of the new element, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}

	else
	{

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}

	return (new);
}
