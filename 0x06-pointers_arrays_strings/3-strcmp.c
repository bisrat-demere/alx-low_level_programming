#include "main.h"
#include <string.h>
/**
 * _strcmp - compare
 * @s1: char one
 * @s2: char two
 * @n: count
 * @a output
 * Return: a
**/

int _strcmp(char *s1, char *s2)
{
	int n = 0, a;

	while (n <= 100)
	{
		if (strcmp(s1, s2) == 0)
		{
			a = 0;
			n++;
		}
		else
		{
			if (strcmp(s1, s2) < 0)
				a = (s1[n] - s2[n]);
			else
				a = (s1[n] - s2[n]);
			break;
		}
	}
	return (a);
}
