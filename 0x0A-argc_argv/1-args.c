#include <stdio.h>
#include <stdlib.h>
/**
 *main - function
 *@argc: int
 *@argv: char
 *Return: 0
**/

int main(int argc, char __attribute__((unused)) *argv[])
{
	argc -= 1;
	printf("%d\n", argc);
	return (0);
}
