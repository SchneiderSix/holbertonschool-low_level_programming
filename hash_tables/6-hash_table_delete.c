#include "hash_tables.h"

/**
* hash_table_delete - explicit name
* @ht: hash table
* Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = ht->array[i]->next;
		}
	}
	free(ht->array);
	ht->size = 0;
	ht->array = NULL;
	free(ht);
}
