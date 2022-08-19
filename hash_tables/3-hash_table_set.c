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
		/* if place is empty */
		if (ht->array[index]->value == 0)
		{
			nn->next = ht->array[index];
			ht->array[index] = nn;
		}
		else
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup((char *)value);
			free(nn->key), free(nn);
		}
	}
	return (1);
}
