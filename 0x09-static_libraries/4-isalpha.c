#include "main.h"
/**
*_isalpha - checks for an alphabetical character
*@c: character
*Return: always 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
