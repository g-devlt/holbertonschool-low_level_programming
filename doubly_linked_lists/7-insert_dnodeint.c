#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a node at the specified index
 * @h: The head of the list
 * @idx: The index to insert at
 * @n: The initialization value of the new node
 * Return: The pointer to the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev;
	dlistint_t *next;

	dlistint_t *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (*h == NULL)
		return (NULL);

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	prev = *h;
	for (; idx > 1 && prev != NULL; --idx)
	{
		prev = prev->next;
	}
	if (prev == NULL)
		return (NULL);

	next = prev->next;

	prev->next = new;
	if (next)
		next->prev = new;

	new->prev = prev;
	new->next = next;

	return (new);
}
