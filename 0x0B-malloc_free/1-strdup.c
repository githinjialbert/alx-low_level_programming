#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup -  returns a pointer
*@str: string
*Return: always 0
*/
char *_strdup(char *str)
{
	char *vi;
	int w, x = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	w = 0;
	while (str[w] != '\0')
		w++;
	vi = malloc(sizeof(char) * (w + 1));
	if (vi == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
		vi[x] = str[x];
	return (vi);
}
