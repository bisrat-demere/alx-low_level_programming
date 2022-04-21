#include "lists.h"
/**
 * print_lists - print nodes list
 * @h: argument list
 *
 * Return: 
 */

size_t print_list(const list_t *h)
{
	size_t node;

	p = h->next;
	node = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if ((h->str) == NULL)
			printf("[%u] %s\n", o, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		node++;
	}
}
