#include "main.h"
/**
 * get_endianness -get endianess
 *
 * Return: 1 if little else 0
 */
int get_endianness(void)
{
	unsigned long int n = 80;

	if ((n >> 1) > n)
		return (0);
	return (1);
}
