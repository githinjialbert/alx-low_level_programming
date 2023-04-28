#include <stdio.h>
#include "lists.h"
/**
*free_list - frees a list
*@head: pointer to list_t
*Return: always 0
*/
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}
}
