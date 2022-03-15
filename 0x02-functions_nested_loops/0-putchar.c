#include <stdio.h>
/**
 * main - putchar file
 * description - a program that prints _putchar
 * Return: always 0
**/

int main(void)
{
	char a[8] = "_putchar";
	int b = 0;

	while (b < 8)
	{
		putchar (a[b]);
		b++;
	}
	putchar ('\n');
	return (0);
}
