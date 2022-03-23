#include "main.h"
#include <string.h>
/**
 * _strcmp - compare
 * @s1: char one
 * @s2: char two
 * Return: 0
**/

int _strcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) < 0)
		return (-15);
	else if (strcmp(s1, s2) > 0)
		return (15);
	else
		return (0);
}
