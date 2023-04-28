#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*add_node - adds node at beginninng of list_t
*@head: double pointer to list_t
*@str: string
*Return: new node at the list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->len = strlen(str);
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
