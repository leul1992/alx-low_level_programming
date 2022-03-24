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
	int i;

	i = 0;
	while (i != n)
	{
		if (src[i] == '\0')
		{
			while (i != n)
			{
				dest[i] = '\0';
				i++;
			}
			break;
		}

		dest[i] = src[i];
		i++;
	}
	return (dest);
}
