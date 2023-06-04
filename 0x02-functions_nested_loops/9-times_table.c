#include "main.h"
/**
*times_table - prints the 9 times table
*Return: void
*/
void times_table(void)
{
	int num1;
	int num2;
	int result;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			result = num1 * num2;

			if (num2 == 0)
			{
				putchar('0' + result);
			}
			else if (result < 10)
			{
				putchar(' ');
				putchar('0' + result);
			}
			else
			{
				putchar('0' + result / 10);
				putchar('0' + result % 10);
			}
			if (num2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		putchar('\n');
	}
	num1++;
}
