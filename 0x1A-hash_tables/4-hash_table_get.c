#include "hash_tables.h"

/**
 * hash_table_get - get the value within the key
 * @ht: the hash table
 * @key: the key of the table that contain the value
 * Return: the value with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	node = ht->array[idx];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
