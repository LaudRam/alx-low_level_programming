#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list listint_t
 * @head: pointer of the head of the list listint_t
 * @index: index of the node, starting from 0
 *
 * Return: nth node of list, NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
