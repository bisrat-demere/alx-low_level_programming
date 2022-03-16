#include "main.h"
/**
 * _abs - absolute value
 * @r: input value
 * description - absolute value of a number
 * Return: k
**/

int _abs(int r)
{
	int k;

	if (r < 0)
		k = 0 - r;
	else
		k = r;
	return (k);
}
