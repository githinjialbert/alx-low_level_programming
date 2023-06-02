#include "main.h"
/**
*_abs - computes the absolute value of an integer
*@c: variable of int
*Return: always 0
*/
int _abs(int c)
{
	if (c < 0)
		return (-c);
	else
		return (c);
}
