#include "main.h"
/**
 * print_most_numbers - pmn
 * description - not 2 and 4
 * Return: 0
**/

void print_most_numbers(void)
{
	char m = '0';

	for (; m <= '9'; m++)
	{
		if (m == '2' || m == '4')
			m++;
		else
		{
			_putchar ('0' + m);
			m++;
		}
	}
	_putchar ('\n');
}
