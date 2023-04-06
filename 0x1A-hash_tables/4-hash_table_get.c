#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value assocaited with a key
 * @ht: the hash table you are search in
 * @key: the key you want the value to be returned
 * Return: the value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *node;

	idx = hash_djb2((const unsigned char *)key);
	node = ht->array[idx];

	if (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	return (NULL);
}
