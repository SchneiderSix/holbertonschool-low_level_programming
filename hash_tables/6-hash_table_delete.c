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
			tmp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
