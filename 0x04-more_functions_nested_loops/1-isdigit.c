#include "main.h"
/**
 * _isdigit - check number
 * @c: input
 * description - return 1 if c is number
 * Return: 1 or 0
**/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
