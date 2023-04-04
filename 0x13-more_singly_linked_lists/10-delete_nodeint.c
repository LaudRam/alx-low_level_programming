#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given position of linked list
 * @head: pointer to the address of the head of list listint_t
 * @index: index of the node to be deleted, starting from 0
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	new = copy->next;
	copy->next = new->next;
	free(new);
	return (1);
}
