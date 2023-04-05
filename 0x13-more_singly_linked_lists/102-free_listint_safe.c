#include "lists.h"

/**
 * shift_memo - reallocates memory of an array of pointers,
 *	to the nodes in a linked list
 * @list: the original list to change
 * @size: size of new list
 * @new: new node to add to list
 *
 * Return: pointer to new list
 */

listint_t **shift_memo(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t n;

	newlist = malloc(sizeof(listint_t *) * size);

	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}

	for (n = 0; n < size - 1; n++)
		newlist[n] = list[n];

	newlist[n] = new;
	free(list);

	return (newlist);
}

/**
 * free_listint_safe - frees a list listint_t
 * @h: pointer to the address of the head of the list
 *
 * Return: size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n, nodes = 0;
	listint_t *temp, **list = NULL;

	list = shift_memo(list, nodes, *h);

	if (h == NULL || *h == NULL)
		return (nodes);

	while (*h != NULL)
	{
		for (n = 0; n < nodes; nodes++)
		{
			if (*h == list[n])
			{
				*h = NULL;
				free(list);
				return (nodes);
			}
		}
		nodes++;
		list = shift_memo(list, nodes, *h);
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
	free(list);
	return (nodes);
}
