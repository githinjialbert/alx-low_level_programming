#include "main.h"
/**
*_puts - output a string to stdout
*@s: string
*Return: always 0
*/
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
