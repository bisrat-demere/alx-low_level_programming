#include "main.h"
#include <string.h>
/**
 * *_strncpy - concatenates
 * @dest: char one
 * @src: char two
 * @n: number of char to be concat
 * Return: dest
**/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
