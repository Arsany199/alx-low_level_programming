#include "hash_tables.h"

/**
 * hash_table_set - add element to the table
 * @ht: is the hash table
 * @key: the key of the element
 * @value: the value of the key
 * Return: 1 if seccess 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *value_copy;
	unsigned long int j, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	j = key_index((const unsigned char *)key, ht->size);
	i = j;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
		i++;
	}

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(value_copy);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = value_copy;
	n->next = ht->array[j];
	ht->array[j] = n;

	return (1);
}
