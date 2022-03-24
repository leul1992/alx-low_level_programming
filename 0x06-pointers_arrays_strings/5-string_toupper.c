#include "main.h"
/**
 * string_toupper-"changes all lower case to uppercase"
 * @c:the characters
 * Return: the uppercase of the characters
 */
char *string_toupper(char *c)
{
	int i = 0;
	char j, k;

	while (c[i] != '\0')
	{
		k = 'A';
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			for (j = 'a'; j <= 'z'; j++)
			{
				if (c[i] == j)
					c[i] = k;
				k++;
			}

		}
		i++;
	}
	i--;
	return (c);
}
