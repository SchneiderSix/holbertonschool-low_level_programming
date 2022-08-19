#include "hash_tables.h"

/**
* hash_table_delete - explicit name
* @ht: hash table
* Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL, *dn = NULL;


	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			dn = tmp;
			tmp = tmp->next;
			free(dn->key);
			free(dn->value);
			free(dn);
		}
		free(tmp);
	}
	free(ht->array);
	free(ht);
}
