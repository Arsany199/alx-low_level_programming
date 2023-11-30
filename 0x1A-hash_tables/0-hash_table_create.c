#include "hash_tables.h"

/**
 * hash_table_create - creats a new hash table
 * @size: the size of the table
 * Return: pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
