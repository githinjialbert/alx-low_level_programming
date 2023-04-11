#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - concatenates two strings.
*@s1: string 1
*@s2: string 2
*Return: always 0
*/
char *str_concat(char *s1, char *s2)
{
	char *tst;
	int v, w =  0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	v = w = 0;
	while (s1[v] != '\0')
	{
		v++;
	}
	while (s2[w] != '\0')
	{
		w++;
	}
	tst = malloc(sizeof(char) * (v + w + 1));

	if (tst == NULL)
		return (NULL);

	v = w = 0;
	while (s1[v] != '\0')
	{
		tst[v] = s1[v];
		v++;
	}
	while (s2[w] != '\0')
	{
		tst[v] = s2[w];
		v++;
		w++;
	}
	tst[v] = ('\0');
	return (tst);
}
