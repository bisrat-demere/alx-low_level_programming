#include "main.h"
/**
 * jack_bauer - 8-24_hours
 * description - print from 00:00 to 23:59
 * return:
**/

void jack_bauer(void)
{
	char a = '0', b = '0', c = '0', d;
	char l = ':';
	char e;

	for (a = '0'; a <= '2'; a++)
	{
		if (a < '2')
			e = '9';
		else
			e = '3';
		for (b = '0'; b <= e; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(l);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
