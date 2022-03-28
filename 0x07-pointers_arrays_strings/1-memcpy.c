#include "main.h"
/**
 * _memcpy - function
 * @dest: copy to
 * @src: copy
 * @n: n int
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
