#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array-create array of characters
 * @size-size of array
 * @c-character
 * Return : array of char
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return (0);
	ar = malloc(size);
	while (size--)
		ar[size] = c;
	return (ar);
}