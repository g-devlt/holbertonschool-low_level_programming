#include "lists.h"

/**
 * sum_dlistint - Sums a whole dlist
 * @head: The head of the list
 * Return: The sum of every int members of each node
 *
*/
int sum_dlistint(dlistint_t *head)
{
	if(!head)
		return (0);
	if (!head->next)
		return (head->n);
	return (sum_dlistint(head->next) + head->n);
}
