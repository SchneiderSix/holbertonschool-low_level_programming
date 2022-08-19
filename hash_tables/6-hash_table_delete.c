#include "hash_tables.h"

/**
* hash_table_delete - explicit name
* @ht: hash table
* Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;


	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{

		while (ht->array[i])
		{
			tmp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
	}
	free(ht->array);
	ht->array[i] = NULL;
	ht->size = 0;
	free(ht);
}
