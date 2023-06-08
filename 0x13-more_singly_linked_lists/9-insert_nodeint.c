#include <stdio.h>
#include "lists.h"
/**
*insert_nodeint_at_index - inserts a new node at a given position
*@head: pointer to listint_t
*@idx: index of the list where the new node should be added
*@n: data of the node
*Return: always 0
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int w = 0;
	listint_t *first = *head;
	listint_t *end;


