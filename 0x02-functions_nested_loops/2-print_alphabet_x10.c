#include "main.h"
#include <stdio.h>
/**
*print_alphabet_x10 -  prints 10 times the alphabet
*/
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
		{
			putchar(la);
		}
		putchar('\n');
	}
}
