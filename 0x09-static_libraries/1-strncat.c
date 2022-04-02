#include "main.h"
/**
 * _strncat-concatenates two strings
 * @dest:the string to be concatenated on
 * @src:the string to be concatenated
 * @n:number of bytes
 * Return: (string)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j != n)
	{
		dest[i] += src[j];
		j++;
		i++;
		if (src[i] == '\0')
			break;
	}
	i--;
	return (dest);
}
