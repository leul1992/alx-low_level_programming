#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create-create a hash table
 * @size: size of the array
 * Return: pointer to the newely create hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	if (size == 0)
		return (NULL);
	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = calloc(size, sizeof(hash_table_t *));
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	return (hash);
}
