#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*print_listint - prints all the elements in listint_t
*@h: pointer to listint_t
*Return: the no of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
