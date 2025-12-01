#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	if(!head->next)
		return (head->n);
	return (sum_dlistint(head->next) + head->n);
}