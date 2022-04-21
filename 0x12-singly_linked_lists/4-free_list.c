#include "lists.h"
/**
 * free_list -free allocated memory
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *p = head;

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
