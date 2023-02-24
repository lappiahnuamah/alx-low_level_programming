#include "main.h"
/**
 * _isupper -  A function that checks for uppercase character
 * @c:	- is the character input
 * Return:  - 1 if c is uppercase , 0 otherwise
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
