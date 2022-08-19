#include "hash_tables.h"


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *nn = NULL;

	nn = malloc(sizeof(hash_node_t));
	if (!nn || !key || !value || !ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	nn->key = strdup((char *)key);
	nn->value = strdup((char *)value);

	/* replace node if null */
	if (!ht->array[index])
	{
		ht->array[index] = nn;
		nn->next = NULL;
	}
	else
	{
		/* update value of key */
		if (ht->array[index]->key == key)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup((char *)value);
			free(nn->key), free(nn);
		}
		else
		{
			nn->next = ht->array[index];
			ht->array[index] = nn;
		}
	}
	return (1);
}
