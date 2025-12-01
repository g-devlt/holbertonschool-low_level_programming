#include "lists.h"
#include <string.h>

int _strlen(const char* str)
{
	int len = 0;
	while(str[len])
		++len;

	return (len);
}

list_t *add_node_end(list_t **head, const char *str)
{
	int len = _strlen(str);
	list_t new = (list_t*)malloc(sizeof(list_t));
	list_t current = *head;
	
	if (!new)
		return (NULL);
	
	new->len = len;
	new->str = strdup(str);
	if(!new->str)
		return (NULL);
	

	while(current->next)
	{
		current = current->next;
	}

	current->next = new;
	return new;

}