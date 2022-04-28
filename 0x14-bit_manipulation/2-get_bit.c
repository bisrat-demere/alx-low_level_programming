#include "main.h"
/**
 * get_bit - value of bit
 * @n: number
 * @index: index of required bit
 *
 * Return: 0 | 1 | -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int q = 1;

	q = q << index;
	if (index > 32)
		return (-1);
	n = n & q;
	while (n != 0)
	{
		if ((n >> 1) == 0)
			return (n);
		n = n >> 1;
	}

	return (0);

}
