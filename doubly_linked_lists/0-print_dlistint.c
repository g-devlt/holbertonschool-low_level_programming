#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints a doubly linked list with printf
 * @h: The head of the doubly linked list
 * Return: The size of the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		count += 1;
	}

	return (count);
}
