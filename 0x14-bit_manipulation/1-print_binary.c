#include "main.h"
/**
 * print_binary - print binary numbers
 * @n: number in decimal
 */
void print_binary(unsigned long int n)
{

	if (n >> 1 == 0)
		_putchar((n - (n >> 1) * 2) + '0');
	else
	{
		print_binary(n >> 1);
		_putchar((n - (n >> 1) * 2) + '0');
	}
}
