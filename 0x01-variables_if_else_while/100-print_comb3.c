#include <stdio.h>
/**
*main - Entry point
*Description: Inventing is a combination of brains and material
*Retrun: always 0
*/
int main(void)
{
	int i;
	int l;

	for (i = 0; i < 10; i++)
	{
		for (l = 1; l < 10; l++)
		{
			if (i < l && i != l)
			{
				putchar(i + '0');
				putchar(l + '0');
				if (i + l != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
