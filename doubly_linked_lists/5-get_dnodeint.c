#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node at a specified index
 * @head: The head of the linked list
 * @index: The index at wich to retrieve the node
 * Return: A pointer to the retrieved node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	for (; index > 0; --index)
	{
		if (!current)
			return (NULL);
		current = current->next;
	}
	return (current);
}
