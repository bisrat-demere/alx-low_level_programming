#include "main.h"
/**
 * print_last_digit - print last digit
 * @r: input value
 * description - %10 of a number
 * Return: k
**/

int print_last_digit(int r)
{
	int k;

	if (r < 0)
		k = -1 * (r % 10);
	else
		k = r % 10;
	_putchar('0' + k);
	return (k);
}
