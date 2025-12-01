#include "lists.h"
#include <stdlib.h>
#include <stddef.h>


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t* new = malloc(sizeof(dlistint_t));
	dlistint_t* current = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (!*head)
	{
		*head = new;
	}
	else
	{
		while(current->next)
		{
			current = current->next;
		}

		current->next = new;
		new->prev = current;
	}

	return (new);

}