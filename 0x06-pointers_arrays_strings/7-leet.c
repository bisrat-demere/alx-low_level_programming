#include "main.h"
/**
 * *leet - upper to lower
 * @g: char
 * Return: g
**/

char *leet(char *g)
{
	int n;
	int low[] = {97, 101, 111, 116, 108};
	int up[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	for (n = 0; g[n] != '\0'; n++)
	{
		if (g[n] == low[n] || g[n] == up[n])
		{
			g[n] = num[n];
			break;
		}
	}
	return (g);
}
