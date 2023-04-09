#include "main.h"
/**
*_isdigit -  for a digit (0 through 9).
*@c: digit to be checked
*Return: 1 if @c is a digit
*Otherwise,return 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
