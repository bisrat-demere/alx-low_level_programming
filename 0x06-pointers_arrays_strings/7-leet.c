#include "main.h"
/**
 * *leet - upper to lower
 * @g: char
 * Return: g
**/

char *leet(char *g)
{
	int i, c = 0;
	int low[] = {97, 101, 111, 116, 108};
	int up[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (g[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (g[c] == low[i] || g[c] == up[i])
			{
				g[c] = num[i];
				break;
			}
		}
		c++;
	}
	return (g);
}
