#include "main.h"
/**
 * *string_toupper - upper to lower
 * @g: char
 * Return: g
**/

char *string_toupper(char *g)
{
	int n;

	for (n = 0; g[n] != '\0'; n++)
	{
		if (g[n] > 96 && g[n] < 123)
			g[n] = (g[n] - 32);
	}
	return (g);
}
