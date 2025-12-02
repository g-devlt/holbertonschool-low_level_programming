#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list
 * @head: The head of the linked list
*/
void free_list(list_t *head)
{
	if (head->next == NULL)
	{
		free(head);
	}
	else
	{
		free_list(head->next);
		free(head);
	}
}
