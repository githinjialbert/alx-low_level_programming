#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - allocates memory
*@b:bytes to be allocated
*Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	char *w;

	w = malloc(b);

	if (w == NULL)
		exit(98);
	return (w);
}
