#include "hash_tables.h"

/**
* hash_table_get - get value of key
* @ht: hash table
* @key: key
* Return: value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (!ht)
	{
		return ((const char *)key);
	}
	if (ht->array[index]->key)
	{
		return (ht->array[index]->value);
	}
	else
	{
		return (ht->array[index]->key);
	}
}
