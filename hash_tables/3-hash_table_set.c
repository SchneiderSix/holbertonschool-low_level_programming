#include "hash_tables.h"

/**
* hash_table_set - set key and value into array
* @ht: hash table struc
* @key: key to be placed or update the value
* @value: value
* Return: 0 if fail, 1 if succeed
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *nn = NULL;

	nn = malloc(sizeof(hash_node_t));
	if (!nn || !key || !value || !ht)
	{
		free(nn);
		return (0);
	}
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
		if (strcmp(ht->array[index]->key, key) == 0)
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
