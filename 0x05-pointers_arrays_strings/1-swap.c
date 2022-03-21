#include "main.h"
/**
 * swap_int - swap value
 * @a: variable one
 * @b: Variable two
**/

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
	b = &d;
	a = &c;
}
