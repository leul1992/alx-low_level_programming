#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup-return pointer to newely allocated space in memory
 * @str:the character
 * Return:pointer to string or null
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *c;

	while (str[size] != '\0')
		size++;
	c = malloc(sizeof(*str) * size + 1);

	if (str == NULL || c == 0)
		return (NULL);
	while (i < size)
	{
		c[i] = str[i];
		i++;
	}
	return (c);
}
