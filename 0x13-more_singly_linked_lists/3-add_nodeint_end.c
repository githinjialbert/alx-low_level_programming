#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint_end - adds a new node at the end of listint_t
*@head: pointer to listint
*@n: integer
*Return: the address of a new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		end = new;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (new);
}
