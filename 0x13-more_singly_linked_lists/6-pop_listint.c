#include <stdio.h>
#include "lists.h"
/**
*pop_listint - deletes the node of a listint_t
*@head: pointer to listint_t
*Return: always 0
*/
int pop_listint(listint_t **head)
{
	int x;
	
	listint_t *first = *head;
	listint_t *now;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		now = first;
		x = first->n;
		first = first->next;
		free(now);
		*head = first;
	}
	return (x);
}
