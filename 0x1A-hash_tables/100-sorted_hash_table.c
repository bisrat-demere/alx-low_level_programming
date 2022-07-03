#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = (shash_node_t **)malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		(ht->array)[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->size = size;
	return (ht);
}
int __lt__(const char *first, const char *second)
{
	int i = 0;
	while (first[i] && second[i])
	{
		if (second[i] > first[i])
		{
			return (1);
		}
		i++;
	}
	if (first[i] == '\0' && second[i] == '\0')
		return (0);
	if (first[i] == '\0' && second[i] != '\0')
		return (1);
	return (-1);
}
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	shash_node_t *cur, *prev, *Node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[i] == NULL)
	{
		Node = (shash_node_t *)malloc(sizeof(shash_node_t));
		if (Node == NULL)
			return (0);
		Node->key = malloc(sizeof(char) * _strlen(key));
		if (Node->key == NULL)
		{
			free(Node);
			return (0);
		}
		Node->value = malloc(sizeof(char) * _strlen(value));
		if (Node->value == NULL)
		{
			free(Node->key);
			free(Node);
			return (0);
		}

		_strcpy(key, Node->key);
		_strcpy(value, Node->value);
		Node->next = (ht->array)[i];
		(ht->array)[i] = Node;
		if (ht->shead == NULL)
		{
			ht->shead = Node;
			ht->stail = Node;
			Node->snext = NULL;
			Node->sprev = NULL;
			return (1);
		}
		cur = ht->shead;
		prev = ht->shead;
		while (cur)
		{
			if (__lt__(cur->key, Node->key) == 1)
			{
				printf("EVER HERE %d\n", __lt__(Node->key, cur->key));
				if (cur == ht->shead)
				{
					cur->sprev = Node;
					Node->snext = cur;
					Node->sprev = NULL;
					ht->shead = Node;
					ht->stail = cur;
				}
				else
				{
					Node->snext = cur;
					Node->sprev = prev;
					cur->sprev = Node;
					prev->snext = Node;
				}
				return (1);
			}
			prev = cur;
			cur = cur->snext;
		}
		(ht->stail)->snext = Node;
		Node->snext = NULL;
		Node->sprev = ht->stail;
		ht->stail = Node;
		return (1);
	}
	else
	{
		cur = (ht->array)[i];
		while(cur && _strcmp(cur->key , key) != 1)
			cur = cur->next;
		if (cur == NULL)
		{
			Node = (shash_node_t *)malloc(sizeof(shash_node_t));
			if (Node == NULL)
				return (0);
			Node->key = malloc(sizeof(char) * _strlen(key));
			if (Node->key == NULL)
			{
				free(Node);
				return (0);
			}
			Node->value = malloc(sizeof(char) * _strlen(value));
			if (Node->value == NULL)
			{
				free(Node->key);
				free(Node);
				return (0);
			}
			_strcpy(key, Node->key);
			_strcpy(value, Node->value);
			Node->next = (ht->array)[i];
			(ht->array)[i] = Node;
			if (ht->shead == NULL)
			{
				Node->sprev = NULL;
				Node->snext = NULL;
				ht->shead = Node;
				ht->stail = Node;
				return (1);
			}
			cur = ht->shead;
			prev = ht->shead;
			while (cur)
			{
				if (__lt__(cur->key, Node->key) == 1)
				{
					if (cur == ht->shead)
					{
						Node->snext = cur;
						Node->sprev = NULL;
						cur->sprev = Node;
						ht->shead = Node;
						ht->stail = cur;
					}
					else
					{
						Node->snext = cur;
						Node->sprev = prev;
						cur->sprev = Node;
						prev->snext = Node;
					}
					return (1);
				}
				prev = cur;
				cur = cur->snext;
			}
			(ht->stail)->snext = Node;
			Node->snext = NULL;
			Node->sprev = ht->stail;
			ht->stail = Node;
			return (1);
		}
		else
		{
			free(cur->value);
			cur->value = malloc(sizeof(char) * _strlen(value));
			if (cur->value == NULL)
			{
				free(cur->key);
				free(cur);
				return (0);
			}
			_strcpy(value, cur->value);
			return (1);

		}



	}

}
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *cur;

	if (ht == NULL || key == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	cur = (ht->array)[i];
	while (cur)
	{
		if (_strcmp(cur->key, key) == 1)
			return (cur->value);
		cur = cur->next;
	}
	return (NULL);
}
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *cur;
	int start = 1;

	cur = ht->shead;
	printf("\n{");
	while(cur)
	{
		if (start == 0)
			printf(", ");
		printf("'%s': '%s'", cur->key, cur->value);
		start = 0;
		cur = cur->snext;
	}
	printf("}\n");
}
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *cur;
	int start = 1;

	cur = ht->stail;
	printf("{");
	while (cur)
	{
		if (start == 0)
			printf(", ");
		printf("'%s': '%s'", cur->key, cur->value);
		cur = cur->sprev;
		start = 0;
	}
	printf("}\n");
}
void shash_table_delete(shash_table_t *ht)
{
}
