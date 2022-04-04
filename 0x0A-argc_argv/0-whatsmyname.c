#include <stdio.h>
#include <stdlib.h>
/**
 *main - function
 *@argc: int
 *@argv: string
 *Return: 0
**/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[(argc - 1)]);
	return (0);
}
