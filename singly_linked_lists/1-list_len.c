#include "lists.h"

/**
 * list_len - Computes the length of a singly linked list
 * @h: The head of the linked list
 * Return: The size of the linked list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t current = h;

	while (current)
	{
		++count;
		current = current->next;
	}
	return (count);
}
