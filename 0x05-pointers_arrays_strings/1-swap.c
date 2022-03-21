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
	*a = 42;
	d = *b;
	*b = 98;
	b = &d;
	a = &c;
}
