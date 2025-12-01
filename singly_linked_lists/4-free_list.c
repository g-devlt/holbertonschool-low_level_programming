#include "lists.h"
#include <stdlib.h>

void free_list(list_t *head)
{
	if(head->next == NULL)
	{
		free(head);
	}else{
		free_list(head->next);
		free(head);
	}
}