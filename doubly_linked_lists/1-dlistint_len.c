#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - Computes the size of a doubly linked list
 * @h: The head of the doubly linked list
 * Return: The size of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		++count;
		h = h->next;
	}

	return (count);
}
