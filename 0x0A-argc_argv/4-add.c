#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that add command line argument
 * @argc: int
 * @argv: char
 * Return: 0 or 1
**/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i] >= '48' && argv[i] <= '57')
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
