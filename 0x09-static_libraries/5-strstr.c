#include "main.h"
/**
*_strstr - returns a pointer
*@haystack: pointer1
*@needle: pointer2
*Return: always 0
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *v = haystack;
		char *x = needle;

		while (*v == *x && *x != '\0')
		{
			v++;
			x++;
		}
		if (*x == '\0')
			return (haystack);
	}
	return (0);
}
