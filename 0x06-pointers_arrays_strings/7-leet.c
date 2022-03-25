#include "main.h"
/**
 * *leet - upper to lower
 * @g: char
 * Return: g
**/

char *leet(char *g)
{
	int n, i = 0;
	int low[] = {97, 101, 111, 116, 108};
	int up[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	for (n = 0; g[n] != '\0'; n++)
	{
		while (i < 5)
		{
			if (g[n] == low[i] || g[n] == up[i])
			{
				g[n] = num[i];
				break;
			}
			i++
		}
	}
	return (g);
}
