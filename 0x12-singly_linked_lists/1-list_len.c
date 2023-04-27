#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*list_len - returns the no of elements in list
*@h: pointer to linked list
*Return: always 0
*/
size_t list_len(const list_t *h)
{
	size_t a = 0;

	for (a =0; h != NULL; h = h->next)
		a++;
	return (a);
}
