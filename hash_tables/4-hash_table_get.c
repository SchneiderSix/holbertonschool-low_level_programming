#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index]->key)
	{
		return (ht->array[index]->value);
	}
	else
	{
		return (printf("%s:"(null)"\n", ht->array[index]->key));
	}
}
