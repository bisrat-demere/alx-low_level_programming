#include "main.h"
#include <string.h>
/**
 * _strcmp - compare
 * @s1: char one
 * @s2: char two
 * Return: 0 if s1 and s2 are equal unless negative or positive
**/

int _strcmp(char *s1, char *s2)
{
	int n = 0, a;

	while (s1[n] != '\0' && s2[n] != '\0')
	{
		if (strcmp(s1, s2) == 0)
		{
			a = (s1[n] - s2[n]);
		}
		else
		{
			a = (s1[n] - s2[n]);
			break;
		}
		n++;
	}
	return (a);
}
