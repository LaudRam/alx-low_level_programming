#include "lists.h"

/**
 * free_listint - frees a list listint_t
 * @head: pointer to the head of list listint_t
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
