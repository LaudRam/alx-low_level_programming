#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list list_t
 * @head: pointer to the list list_t
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;

		free(head->str);
		free(head);

		head = temp;
	}
}
