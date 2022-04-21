#include "lists.h"
/**
 * list_len - return number of elements in list
 * @h: head
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;
	list_t *Node;

	i = 0;
	if (!h)
		return (0);
	if (h)
		i++;
	Node = h->next;
	while (Node)
	{
		i++;
		Node = Node->next;
	}

	return (i);
}
