#include "main.h"

/**
 * print_diagonal - print \ line
 * @n: number of line
**/

void print_square(int n)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar('\');
			_putchar('\n');
		}
	}
}
