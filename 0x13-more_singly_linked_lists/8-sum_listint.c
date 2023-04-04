#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of linked list listint_t
 * @head: pointer to the head of list listint_t
 *
 * Return: sum of all list listint_t data, 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
