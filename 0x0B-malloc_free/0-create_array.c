#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function create an array
 * @size: size of an aray
 * @c: char
 * Return: 0 or p
**/

char *create_array(unsigned int size, char c)
{
	unsigned int b;
	char *p;

	if (size == 0)
		return (0);
	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		p[b] = c;
	return (p);
}
