#include "main.h"
/**
 * print_triangle - t
 * @size: size of triangle
 * description - triangle
 * Return: 0
**/

void print_triangle(int size)
{
	int a, d, e;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (d = size; d > 0; d--)
		{
			for (e = d; e > 1; e--)
				_putchar(' ');
			for (a = (size - d) ; a >= 0; a--)
				_putchar('#');
			_putchar('\n');
		}
	}
}

