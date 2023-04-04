#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list listint_t
 * @head: pointer to the address of the head of list listint_t
 *
 * Return: head node's data (n), 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (data);
}
