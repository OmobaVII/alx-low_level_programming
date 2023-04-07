#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table to add the element to
 * @key: the key of the element we want to add
 * @value: the value associated with the key
 * Return: 1 for success and 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node, *replacement_node;
	int a, idx;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	a = hash_djb2((const unsigned char *)key) % ht->size;
	replacement_node = ht->array[a];
	while (replacement_node != NULL)
	{
		if (strcmp(replacement_node->key, key) == 0)
		{
			free(replacement_node->value);
			replacement_node->value = strdup(value);
			free(new_node);
			return (1);
		}
		replacement_node = replacement_node->next;
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	
	idx = hash_djb2((const unsigned char *)key) % ht->size;
	current_node = ht->array[idx];
	if (current_node == NULL)
	{
		ht->array[a] = new_node;
	}
	else
	{
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}

	return (1);
}
