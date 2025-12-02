#include "lists.h"
#include <string.h>

/**
 * _strlen - Computes the length of a cstring
 * @str: The cstring to compute
 * Return: The size of the cstring
*/
int _strlen(const char *str)
{
	int len = 0;

	while (str[len])
		++len;

	return (len);
}

/**
 * add_node_end - Adds a node at the end of a linked list
 * @head: The head of the linked list
 * @str: The value of the node
 * Return: A poniter to the new node
 * Description: Replace heads value with a pointer to the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int len = _strlen(str);
	list_t *new = (list_t *)malloc(sizeof(list_t));
	list_t *current = *head;

	if (!new)
		return (NULL);

	new->len = len;
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;

	if (current)
	{
		while (current->next)
		{
			current = current->next;
		}

		current->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
