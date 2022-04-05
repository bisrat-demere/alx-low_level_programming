#include <stdio.h>
#include <stdlib.h>
/**
 * coin - function that calculate min coin can be return
 * @x: int input
 * Return: c
**/

int coin(int x)
{
	int c = 0;

	while (x > 0)
	{
		if (x >= 25)
		{
			c++;
			x = x - 25;
		}
		else if (x >= 10)
		{
			c++;
			x = x - 10;
		}
		else if (x >= 5)
		{
			c++;
			x = x - 5;
		}
		else if (x >= 2)
		{
			c++;
			x = x - 2;
		}
		else
		{
			c++;
			x = x - 1;
		}
	}
	return (c);
}

/**
 * main - function that check amount of change
 * @argc: int
 * @argv: char
 * Return: 0 or 1
**/

int main(int argc, char *argv[])
{
	int x = (atoi(argv[1])), y;

	if (argc == 2)
	{
		y = coin(x);
		printf("%i\n", y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
