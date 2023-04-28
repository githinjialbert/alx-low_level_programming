#include <stdio.h>
#include "lists.h"
/**
*add_node_end - adds new node at the end of the list
*@head: pointer to the list_t
*@str: string
*Return: always 0
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end = *head;
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new;
	}
	return (new);
}
