#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints a linked list
 * @h: Head of the linked list
 * Return: The size of the linked list
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *current = h;

	while (current)
	{
		if (!current->str)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s", current->len, current->str);
		}
		++count;
		current = current->next;
	}
	return (count);
}
