#include "main.h"
/**
 * binary_to_uint - convert to binary num to unsigned int
 * @b: string of binary digits char (0 & 1)
 *
 * Return: unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	unsigned int i;
	unsigned int *unum;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] == '1' || b[len] == '0')
			len++;
		else
			return (0);
	}
	unum = malloc(sizeof(unsigned int) * len);
	if (unum == NULL)
		return (0);
	for (i = len; i > 0; i--)
		unum[i - 1] = 0x01 << (len - i);
	for (i = 0; i < len; i++)
		sum = sum + unum[i] * (b[i] - '0');
	free(unum);

	return (sum);
}
