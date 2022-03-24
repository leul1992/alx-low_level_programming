#include "main.h"
/**
 * _strncpy-copies a string
 * @dest:string
 * the destination of the string to be copied
 * @src:string
 * the source of the string to be copied
 * @n:integer
 * the number of string to be copied
 * Return:(dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (j != n)
	{
		dest[i] = src[j];
		i++;
		j++;
		if (src[i] == '\0')
		{
			while (j != n)
			{
				dest[i] = '\0';
				i++;
				j++;
			}
			break;
		}
	}

	return (dest);
}
