#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_dnodeint_end - Adds a node to the back of a doubly linked list
 * @head: The head of the list
 * @n: The initialization value for the new node
 * Return: A pointer to the new node
 * Description: If *head is NULL, replaces it with the new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (!*head)
	{
		new->prev = NULL;
		new->next = NULL;

		*head = new;
	}
	else
	{
		while (current->next)
		{
			current = current->next;
		}

		current->next = new;
		new->prev = current;
	}

	return (new);

}
