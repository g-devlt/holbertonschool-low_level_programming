#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a doubly linked list
 * @head: The head of the list.
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	if (head->next == NULL)
	{
		free(head);
	}
	else
	{
		free_dlistint(head->next);
		free(head);
	}
}
