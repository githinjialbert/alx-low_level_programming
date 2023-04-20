#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_strings - prints numbers
*@separator: string to be printed between the strings
*@n: no of strings
*@...: no of strings to be printed
*Return: always 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ti;
	unsigned int x;
	char *s;

	va_start(ti, n);
	for (x = 0; x < n; x++)
	{
		s = va_arg(ti, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ti);
}
