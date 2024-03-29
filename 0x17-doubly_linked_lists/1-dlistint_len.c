#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list dlistint_t
 * @h: head of list
 *
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
