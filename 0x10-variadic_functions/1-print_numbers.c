#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_numbers - prints numbers
*@separator: string to be printed between numbers
*@...: no of int passed to the function
*@n: no of integers passed to the function
*Return: always 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list wq;
	unsigned int v;

	va_start(wq, n);
	for (v = 0; v < n; v++)
	{
		printf("%d", va_arg(wq, int));
		if (v != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(wq);
}
