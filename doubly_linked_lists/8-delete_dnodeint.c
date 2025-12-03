#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node in a dlist
 * @head: The head of the linked list
 * @index: The index of the node to delete
 * Return: -1 on failure, 1 on success
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	if(!node)
		return -1;

	for (; index > 0; --index)
	{
		if (!node)
			return (-1);
		node = node->next;
	}

	if (node->prev)
		node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;

	free(node);
	return (1);
}
