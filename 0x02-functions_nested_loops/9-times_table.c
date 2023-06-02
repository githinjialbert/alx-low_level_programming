#include "main.h"
/**
*times_table - prints the 9 times table
*Return: void
*/
void times_table(void)
{
	int num;
	int result;
	int num1;

	for (num = 0; num <= 9; num++)
	{
		for (num1 = 0; num1 <= 9; num1++)
			result = num * num1;
		if (num == 0)
		{
			result++;
			num++;
		}
		else if (num1 == 0)
		{
			result++;
			num1++;
		}
		printf("%2d, ", result);
	}
	printf("\n");
}
