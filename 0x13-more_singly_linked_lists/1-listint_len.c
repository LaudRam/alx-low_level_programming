#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list listint_t
 * @h: pointer to the head of list listint_t
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
