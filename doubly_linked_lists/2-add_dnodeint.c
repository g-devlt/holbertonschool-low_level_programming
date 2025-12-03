#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_dnodeint - Adds a node to the front of a doubly linked list
 * @head: The head of the doubly linked list
 * @n: The initializatino parameter for a node
 * Return: A pointer to the new node
 * Description: Replaces *head with the pointer to the new node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;
	return (*head);
}
