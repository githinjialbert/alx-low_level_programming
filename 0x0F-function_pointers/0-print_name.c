#include <stdio.h>
#include "function_pointers.h"
/**
*print_name - prints a name
*@name: pointer to the name
*@f: pointer to function
*Return: always 0
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
