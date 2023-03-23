#include "main.h"
/**
*isupper - checks for uppercase character.
*/
int _isupper(int c)
{
	int start = 65, end = 90;  
		if (c >= start && c <= end)
			return (1);
		return (0);
}
