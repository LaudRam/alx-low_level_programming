#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of linked list dlistint_t
 * @head: head of list
 * @index: the index of the node, starting from 0
 *
 * Return: address of node, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
