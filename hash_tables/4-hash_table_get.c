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
	hash_node_t tmp;

	if (!ht || !key)
	{
		return (NULL)
	}
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			return (ht->array[index]->value);
		}
		tmp->next = tmp;
	}
	return (NULL);
}
