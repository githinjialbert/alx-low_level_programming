#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - returns the sum of all its parameters
*@n: unsigned int
*Return: always 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list wq;
	int result = 0;
	unsigned int q;

	if (n == 0)
		return (0);
	result = 0;
	va_start(wq, n);
	for (q = 0; q < n; q++)
		result += va_arg(wq, int);
	va_end(wq);
	return (result);
}
