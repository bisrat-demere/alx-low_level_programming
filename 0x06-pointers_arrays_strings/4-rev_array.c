#include "main.h"
/**
 * reverse_array - a fun reverses
 * @a: pointer array
 * @n: elements to swap
 * Return: nothing
**/

void reverse_array(int *a, int n)
{
		int temp, s, e;

		s = 0;
		e = n - 1;
		while (s < e)
		{
			temp = a[s];
			a[s] = a[e];
			a[e] = temp;
			s++;
			e--;
		}
}
