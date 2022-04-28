#include "main.h"
/**
 * flip_bits - flip bit to get other number
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned int len = 0;
	unsigned long int a = 0x01;


	count = n ^ m;
	while (count != 0)
	{
		len = len + (unsigned int)(a & count);
		count = count >> 1;
	}

	return (len);
}
