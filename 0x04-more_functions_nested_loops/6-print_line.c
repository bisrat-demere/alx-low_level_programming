#include "main.h"
/**
 * print_line - print n size line
 * @n: number of size
**/

void print_square(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
