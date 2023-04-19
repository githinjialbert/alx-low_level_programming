#include <stdio.h>
#include "function_pointers.h"
/**
*array_iterator -  executes a function
*@array: array
*@size: size of the array
*@action: pointer to the function you need to use
*Return: always 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int w;

	if (array == NULL || action == NULL)
		return;
	for (w = 0; w < size; w++)
		action(array[w]);
}
