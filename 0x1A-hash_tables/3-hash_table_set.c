#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new_node = NULL;
	hash_node_t *temp = NULL;

	if (!ht || !key || !value || !(*key))
	{
		return (0);
	}
	while (temp && strcmp(temp->key, key) != 0)
	{
		temp = temp->next;
	}
	if (temp)
	{
		free(temp->value);
		temp->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
	{
		return (0);
	}
	else
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = ht->array[idx];
		ht->array[idx] = new_node;
	}
	return (1);
}
