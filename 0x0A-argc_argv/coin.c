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
	int x, c = 0;

	if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
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
		printf("%i\n", c);
	}
		return 0;
}
