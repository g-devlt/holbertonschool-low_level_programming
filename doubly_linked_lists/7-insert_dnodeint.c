#include "lists.h"
#include <stdlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev;
	dlistint_t *next;

	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		prev = NULL;
		next = *h;

		next->prev = new;
	}
	else
	{
		prev = *h;
		for (; idx > 1; --idx)
		{
			prev = prev->next;
		}
		next = prev->next;

		prev->next = new;
		next->prev = new;

	}

	new->prev = prev;
	new->next = next;

	return (new);
}
