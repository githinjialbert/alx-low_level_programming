#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*listint_len - prints the number of elements in listint_t
*@h: pointer to listint_h
*Return: all the elements int the list
*/
size_t listint_len(const listint_t *h)
{
	size_t w = 0;

	while (h != NULL)
	{
		w++;
		h = h->next;
	}
	return (w);
}
