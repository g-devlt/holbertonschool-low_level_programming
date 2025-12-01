#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	if(head->next == NULL)
	{
		free(head);
	}else{
		free_dlistint(head->next);
		free(head);
	}
}