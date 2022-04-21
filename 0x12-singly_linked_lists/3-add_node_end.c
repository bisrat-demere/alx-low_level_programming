#include "lists.h"
/**
 * add_node_end - add node to end of list
 * @head: the head pointer
 * @str: default str
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *Node, *p;
	unsigned int i;

	Node = malloc(sizeof(list_t));
	if (Node == NULL)
		return (*head);
	Node->str = strdup(str);
	if (Node->str == NULL)
	{
		free(Node);
		return (*head);
	}
	i = 0;
	while (str[i])
		i++;
	Node->len = i;
	Node->next = NULL;
	if (*head == NULL)
		*head = Node;
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		p->next = Node;
	}

	return (*head);
}
