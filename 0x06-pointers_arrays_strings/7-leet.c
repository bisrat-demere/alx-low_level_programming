#include "main.h"
/**
 * *leet - upper to lower
 * @g: char
 * Return: g
**/

char *leet(char *g)
{
	int n;

	for (n = 0; g[n] != '\0'; n++)
	{
		if (g[n] == 65 || g[n] == 97)
			g[n] = 52;
		if (g[n] == 69 || g[n] == 101)
			g[n] = 51;
		if (g[n] == 76 || g[n] == 108)
			g[n] = 49;
		if (g[n] == 79 || g[n] == 111)
			g[n] = 48;
		if (g[n] == 84 || g[n] == 116)
			g[n] = 55;
	}
	return (g);
}
