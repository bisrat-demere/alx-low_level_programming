#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that add command line argument
 * @argc: int
 * @argv: char
 * Return: 0 or 1
**/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
