#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint - adds new node at beginning of listint_t
*@head: pointer to listint_t
*@n: integer
*Return: address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
