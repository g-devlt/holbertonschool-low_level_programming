#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t* current = head;

	for (; index > 0; --index)
	{
		current = current->next;
	}
	return current;
}