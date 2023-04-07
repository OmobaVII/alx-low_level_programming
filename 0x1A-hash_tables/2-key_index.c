#include "hash_tables.h"
/**
 * key_index - a function that gives the index of a key
 * @key: the key to get the index of
 * @size: the size of the array of the hash table
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int a;

	if (size == 0)
	{
		return (0);
	}

	a = hash_djb2(key);

	return (a % size);
}
