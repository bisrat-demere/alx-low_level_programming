#include "lists.h"
/**
 * add_node -add new node to list
 * @head: head pointer
 * @str: default string
 *
 * Return: new head pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *Node;
	unsigned int i;

	Node = malloc(sizeof(list_t));
	if (Node == NULL)
		return (*head);
	i = 0;
	Node->str = strdup(str);
	while (str[i])
		i++;

	Node->next = *head;
	Node->len = i;
	*head = Node;

	return (*head);
}
