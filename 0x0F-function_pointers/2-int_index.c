#include <stdio.h>
#include "function_pointers.h"
/**
*int_index - returns index for the first element
*@array: pointer to integer
*@size: no of elements in the arry
*@cmp: pointer to function
*Return: always 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int q;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (q = 0; q < size; q++)
		if (cmp(array[q]))
			return (q);
	return (-1);
}
