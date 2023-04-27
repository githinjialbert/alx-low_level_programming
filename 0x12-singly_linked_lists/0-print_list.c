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

	for (; h != NULL; h = h->next, v++)
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
	return (v);
}
