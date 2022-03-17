#include "main.h"
/**
 * more_numbers - number.c
 * description - 0-14* x10
 * Return: always 0
**/

void more_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		int alph = 0;

		while (alph <= 9)
		{
			_putchar(alph + '0');
			alph++;
		}
		_putchar('\n');
		n++;
	}
}

