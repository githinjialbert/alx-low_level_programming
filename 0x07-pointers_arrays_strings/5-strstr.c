#include "main.h"
#include <stdio.h>
/**
*_strstr -  locates a substring
*@haystack:  string
*@needle: substring
*Return: always 0
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *m = needle;

		while (*k == *m && *m != '\0')
		{
			k++;
			m++;
		}
		if (*m == '\0')
			return (haystack);
	}
	return (0);
}
