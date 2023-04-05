#include "lists.h"

/**
 * shift_mem - reallocates memory of an array of pointers,
 *	to the nodes in a linked list
 * @list: the original list to change
 * @size: size of new list
 * @new: new node to add to list
 *
 * Return: pointer to new list
 */

const listint_t **shift_mem(const listint_t **list,
		size_t size, const listint_t *new)
{
	const listint_t **newlist;
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
 * print_listint_safe - prints a linked list listint_t
 * @head: pointer to the head of the list
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n, nodes = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (n = 0; n < nodes; n++)
		{
			if (head == list[n])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (nodes);
			}
		}
		nodes++;
		list = shift_mem(list, nodes, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (nodes);
}
