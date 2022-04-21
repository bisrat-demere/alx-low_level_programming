#include "lists.h"
/**
 * print_list - print nodes list
 * @h: argument list
 *
 * Return: num of node
 */

size_t print_list(const list_t *h)
{
	list_t *p;
	size_t i;

	if (h == NULL)
		return (0);
	i = 1;
	if ((h->str) == NULL)
		printf("[%u] %s\n", 0, "(nil)");
	else
		printf("[%u] %s\n", h->len, h->str);

	p = h->next;
	while (p != NULL)
	{
		if ((p->str) == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", p->len, p->str);
		p = p->next;
		i++;
	}

	return (i);
}
