#include "hash_tables.h"


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp, *nn;


	if (!key || !value || !ht)
		return (0);
	nn = malloc(sizeof(hash_node_t));
	if (!nd)
		return (0);
	nn->key = key;
	nn->value = strdup(value);
	
}
