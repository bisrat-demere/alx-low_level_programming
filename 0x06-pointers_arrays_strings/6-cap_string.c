#include "main.h"
/**
 * *cap_string - upper to lower
 * @g: char
 * Return: g
**/

char *cap_string(char *g)
{
	int n;

	for (n = 0; g[n] != '\0'; n++)
	{
		if (g[0] > 96 && g[0] < 123)
			g[0] = (g[0] - 32);
		if (g[n] == 32 || g[n] == 46 || g[n] == 9 || g[n] == 10 || g[n] == 44)
		{
			if (g[n + 1] > 96 && g[n + 1] < 123)
				g[n + 1] = (g[n + 1] - 32);
		}
		if (g[n] == 59 || g[n] == 33 || g[n] == 63 || g[n] == 34 || g[n] == 40)
		{
			if (g[n + 1] > 96 && g[n + 1] < 123)
				g[n + 1] = (g[n + 1] - 32);
		}
		if (g[n] == '\n' || g[n] == '\t' || g[n] == 41 || g[n] == 123 || g[n] == 124)
		{
			if (g[n + 1] > 96 && g[n + 1] < 123)
				g[n + 1] = (g[n + 1] - 32);
		}
	}
	return (g);
}
