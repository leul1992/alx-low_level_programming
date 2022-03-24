#include "main.h"
/**
 * leet-encode string into 1337
 * @c:characters
 * Return:encoded character
 */
char *leet(char *c)
{
	int i, j;
	char c1[] = "aeotl";
	char c2[] = "AEOTL";
	char c3[] = "43071";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == c1[j] || c[i] == c2[j])
			{
				c[i] = c3[j];
				break;
			}
		}
	}
	return (c);
}
