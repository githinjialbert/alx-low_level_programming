#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*free_listint - frees listint_t
*@head: pointer to listint_t
*Return: always 0
*/
void free_listint(listint_t *head)
{
	listint_t *first = head;
	listint_t *now;

	while (first != NULL)
	{
		now = first;
		first = first->next;
		free(now);
	}
}
