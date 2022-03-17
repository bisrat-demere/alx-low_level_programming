#include "main.h"
/**
 * positive_or_negative - check
 * @i - input
 * Return: 0
**/

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%i is negative", i);
	else if (i > 0)
		printf("%i is positive", i);
	else
		printf("%i is zero", i);
	printf("\n");
}
