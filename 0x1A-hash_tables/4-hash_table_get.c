#include "hash_tables.h"

/**
 * hash_table_get - get the value within the key
 * @ht: the hash table
 * @key: the key of the table that contain the value
 * Return: the value with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	new_node = ht->array[index];

	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
			return (new_node->value);

	new_node = new_node->next;
	}
	return (NULL);
}
