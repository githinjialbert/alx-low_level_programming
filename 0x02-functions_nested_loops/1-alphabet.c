#include "main.h"
#include <stdio.h>
/**
*print_alphabet - prints alphabet in lowercase
*Return: void
*/
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		putchar(la);
	}
	putchar('\n');
}
