#include "hash_tables.h"
/**
* key_index - map index to key
* @key: key to be indexed
* @size: size of ht
* Return: n of op
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int n;

	n = hash_djb2(key) % size;
	return (n);
}
