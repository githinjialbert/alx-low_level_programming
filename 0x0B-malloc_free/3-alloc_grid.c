#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid -  returns a pointer
*@width: wideness
*@height: tallness
*Return: always 0
*/
int **alloc_grid(int width, int height)
{
	int **jid;
	int s, w;

	if (width <= 0 || height <= 0)
		return (NULL);
	jid = malloc(sizeof(int *) * height);
	if (jid == NULL)
		return (NULL);

	for (s = 0; s < height; s++)
	{
		jid[s] = malloc(sizeof(int *) * width);

		if (jid[s] == NULL)
		{
			for (; s >= 0; s--)
				free(jid[s]);
			free(jid);
			return (NULL);
		}
	}
	for (s = 0; s < height; s++)
	{
		for (w = 0; w < width; w++)
			jid[s][w] = 0;
	}
	return (jid);
}
