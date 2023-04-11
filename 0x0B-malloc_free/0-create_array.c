#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array  - creates strings
* @c: characters
* @size: the size of the memory to print
* Return: always 0
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int q;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (q = 0; q < size; q++)
		str[q] = c;
	return (str);
}
