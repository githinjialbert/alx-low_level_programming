#include "main.h"
#include <stdio.h>
int actual_sqrt_recursion(int n, int q);
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to calculate the square root
* Return: the resulting square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
* actual_sqrt_recursion - repeats to find the natural
* square root of a number
* @n: number to calculate the sqaure root
* @q: iterator
* Return: the resulting square root
*/
int actual_sqrt_recursion(int n, int q)
{
	if (q * q > n)
		return (-1);
	if (q * q == n)
		return (q);
	return (actual_sqrt_recursion(n, q + 1));
}
