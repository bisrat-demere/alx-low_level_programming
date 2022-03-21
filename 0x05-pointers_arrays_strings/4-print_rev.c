#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string revers
 * @s: string
**/

void print_rev(char *s)
{
	int x;

	x = strlen(s);
	for (; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
