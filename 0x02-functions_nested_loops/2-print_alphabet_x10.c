#include "main.h"
/**
 * print_alphabet_x10 - alphabet.c
 * description - lowercase
 * Return: always 0
**/

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char alph = 'a';

		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		n++;
	}
}

