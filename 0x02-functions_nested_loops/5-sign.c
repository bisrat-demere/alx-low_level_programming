#include "main.h"
/**
 * print_sign - number
 * @n: any number
 * description - check if it is + - o
 * Return: 1 else if 0 else -1
**/

int print_sign(int n)
{
	char p = '+';
	char nn = '-';
	char z = '0';

	if (n > 0)
	{
		_putchar(p);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(nn);
		return (-1);
	}
	else
	{
		_putchar(z);
		return (0);
	}
}
