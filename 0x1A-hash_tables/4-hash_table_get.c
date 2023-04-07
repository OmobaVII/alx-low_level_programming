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

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
