#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*print_list - prints the list
*@h: pointer to the list_t
*Return: the elements of the list
*/
size_t print_list(const list_t *h)
{
	size_t v = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		v++;
	}
	return (v);
}
