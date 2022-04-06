#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * digit - function check number
 * @n: string
 * Return: 0 if it's a number
 *         1 if it's not a number
*/

int digit(char n[])
{
	int i, sl = strlen(n);

	for (i = 0; i < sl; i++)
	{
		if (!isdigit(n[i]))
			return (1);
	}
	return (0);
}


/**
 * main - function add number
 * @argc: int
 * @argv: char
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (digit(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
