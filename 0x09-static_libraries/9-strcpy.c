#include "main.h"
/**
*_strcpy - copies a string from the source
*@dest: destination
*@src: source
*Return: always 0
*/
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = ('\0');
	return (original_dest);
}
