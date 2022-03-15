#include "main.h"
/**
 * _islower - islower
 * @c: c afer beyi
 * description - check if it is lower case
 * Return: 1 else 0
**/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
