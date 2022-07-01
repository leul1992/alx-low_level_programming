#include "hash_tables.h"
/**
 * key_index-give index of a key
 * @key: the key of the hash
 * @size: the size of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
