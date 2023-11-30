#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes the hash table
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		node = ht->array[i];
		free_hash_list(node);
		i++;
	}
	free(ht->array);
	free(ht);
}

/**
 * free_hash_list - frees the hash list
 * @head: the head of the list
 */
void free_hash_list(hash_node_t *head)
{
	hash_node_t *now;
	hash_node_t *next;

	now = head;

	while (now != NULL)
	{
		next = now->next;
		free(now->key);
		free(now->value);
		free(now);
		now = next;
	}
}
