#include <stdio.h>
#include "lists.h"
/**
*sum_listint - prints the sum of all the data
*@head: pointer to the listint_t
*Return: always 0
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *first = head;

	while (first != NULL)
	{
		if (first == NULL)
		{
			return (0);
		}
		sum += first->n;
		first = first->next;
	}
	return (sum);
}
