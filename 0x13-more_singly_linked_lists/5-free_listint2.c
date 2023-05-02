#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*free_listint2 - frees a listint_t
*@head: double pointer to the first node
*Return: always 0
*/
void free_listint2(listint_t **head)
{
	listint_t *first = *head;
	listint_t *now;

	if (*head == NULL)
	{
		return;
	}

	while (first != NULL)
	{
		now = first;
		first = first->next;
		free(now);
	}
	*head = NULL;
}
