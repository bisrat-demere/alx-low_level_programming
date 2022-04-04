#include <stdio.h>
#include <stdlib.h>
/**
 *main - function
 *@argc: int
 *@argv: char
 *Return: 0 and 1
**/

int main(int argc, char *argv[])
{
	int i, j = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j = j * atoi(argv[i]);
		}
		printf("%d\n", j);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
