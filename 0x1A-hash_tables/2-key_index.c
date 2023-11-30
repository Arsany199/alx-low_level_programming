#include "hash_tables.h"


/**
 * key_index - this function gives an index of the key
 * @key: is the key
 * @size: size of the table
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
