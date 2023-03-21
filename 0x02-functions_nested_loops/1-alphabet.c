#include "main.h"
/**
*print_alphabet - prints the alphabet, in lowercase, followed by a new line
*
*Return: always 0
*/
void print_alphabet(void)
{
	int n;

	for (n = 48; n <= 122; n++)
		_putchar(n);
	_putchar('\n');
}
