#include "hash_tables.h"
/**
 * shash_table_create - a function that creates a sorted hash table
 * @size: the size of the table
 * Return: the created table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int a;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->size = size;
	new_table->array = malloc(size * sizeof(shash_node_t *));
	if (new_table->array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < new_table->size; a++)
	{
		new_table->array[a] = NULL;
	}
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}
/**
 * shash_node_insert - a function that inserts a new sorted node
 * @ht: the sorted hash table
 * @new: the node to add
 * Return: void
 */
void shash_node_insert(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *current;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		return;
	}
	current = ht->shead;
	while (current != NULL)
	{
		if (strcmp(new->key, current->key) < 0)
		{
			new->snext = current;
			new->sprev = current->sprev;
			current->sprev = new;
			if (new->sprev != NULL)
				new->sprev->snext = new;
			else
				ht->shead = new;
			return;
		}
		current = current->snext;
	}
	new->sprev = ht->stail;
	ht->stail->snext = new;
	ht->stail = new;
}
/**
 * shash_table_set - a function that sets a sorted hash table
 * @ht: the hash table
 * @key: the key to set
 * @value: the value of the key
 * Return: 1 for success and 0 for fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[idx];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			if (strdup(value) == NULL)
				return (0);
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->snext;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	shash_node_insert(ht, new_node);
	return (1);
}
/**
 * shash_table_get - a function that gets the value by a key in a hash table
 * @ht: the sorted hash table
 * @key: the key to get its value
 * Return: the value associated with the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	int idx;

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
		node = node->snext;
	}
	return (NULL);
}
/**
 * shash_table_print - a function that prints a sorted hash table
 * @ht: the hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned long int first;

	first = 1;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (!first)
		{
			printf(", ");
		}
		printf("'%s': '%s'", node->key, node->value);
		first = 0;
		node = node->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - function that prints a sorted hash table in reverse
 * @ht: the sorted hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		if (!first)
		{
			printf(", ");
		}
		printf("'%s': '%s'", node->key, node->value);
		first = 0;
		node = node->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - a function that deletes a sorted hash table
 * @ht: the sorted hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *temp;
	unsigned long int a;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	a = 0;
	for (a = 0; a < ht->size; a++)
	{
		tmp = ht->array[a];
		while (tmp != NULL)
		{
			temp = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = temp;
		}
	}
	free(ht->array);
	free(ht);
}
