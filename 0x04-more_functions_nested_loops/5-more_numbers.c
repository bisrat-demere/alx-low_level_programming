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
		int alph = 0, a = 0, b = 1, c = 2, d = 3, e = 4;

		while (alph <= 14)
		{
			if (alph < 10)
				_putchar(alph + '0');
			else if (alph < 11)
			{
				_putchar(b + '0');
				_putchar(a + '0');
			}
			else if (alph < 12)
			{
			_putchar(b + '0');
			_putchar(b + '0');
			}
			else if (alph < 13)
			{
				_putchar(b + '0');
				_putchar(c + '0');
			}
			else if (alph < 14)
			{
				_putchar(b + '0');
				_putchar(d + '0');
			}
			else if (alph < 15)
			{
				_putchar(b + '0');
				_putchar(e + '0');
			}
			alph++;
		}
		_putchar('\n');
		n++;
	}
}

