#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*array_range - creates an array of integers
*@min: input value
*@max: output value
*Return: always 0
*/
int *array_range(int min, int max)
{
	int *x;
	int v, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	x = malloc(sizeof(int) * size);

	if (x == NULL)
		return (NULL);
	for (v = 0; min <= max; v++)
		x[v] = min++;
	return (x);
}
