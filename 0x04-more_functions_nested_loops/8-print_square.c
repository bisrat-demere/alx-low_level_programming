#include "main.h"
#include <stdio.h>
/**
 * print_square - print n size square
 * @size: number of size
**/

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				printf("#");
			printf("\n");
		}
	}
}
