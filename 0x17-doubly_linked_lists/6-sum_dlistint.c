#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of linked list dlistint_t
 * @head: head of list
 *
 * Return: sum of all data in the list, otherwise 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
