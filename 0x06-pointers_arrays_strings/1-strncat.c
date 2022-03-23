#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenates
 * @dest: char one
 * @src: char two
 * @n: number of char to be concat
 * Return: dest
**/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
