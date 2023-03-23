#include "main.h"
/**
*isupper - checks for uppercase character.
*Return:1 if c is a digit 0 otherwise
*/
int _isupper(int c)
{
	int start = 65, end = 90;
	if (c >= start && c <= end)
		return (1);
	return (0);
}
