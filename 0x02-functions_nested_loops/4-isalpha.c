#include "main.h"
/**
 * _isalpha - isalpha
 * @c: c afer beyi
 * description - check if it is lower case
 * Return: 1 else 0
**/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
