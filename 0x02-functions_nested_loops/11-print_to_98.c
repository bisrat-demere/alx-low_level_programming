#include "main.h"
/**
 * print_to_98 - until 98
 * @n: input number
 * description - fun adds to integers
**/

void print_to_98(int n)
{
	int x;
	char y = ',';
	char z = ' ';

	for (x = n; x <= 98; x++)
	{
		_putchar('0' + x);
		_putchar(y);
		_putchar(z);
	}
}
