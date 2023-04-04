#include "lists.h"

/**
 * free_listint2 - frees a list listint_t, sets the head to NULL
 * @head: pointer to the address of the head of list listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
