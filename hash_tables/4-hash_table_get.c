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

	if (!ht || !key)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			return (ht->array[index]->value);
		}
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
