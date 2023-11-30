#include "hash_tables.h"

/**
 * hash_table_print - this function prints a hash table
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *node;
	short int j = 0;

	if (ht == NULL)
		return;

	putchar('{');
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (j)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;

			if (j == 0)
				j = 1;
		}
		i++;
	}
	printf("}\n");
}
