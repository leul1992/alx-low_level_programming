#include <stdlib.h>
/**
 * _strlen-string length
 * @s:string
 * Return:length
 */
unsigned int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * string_nconcat-concatenate two strings
 * @s1:first string
 * @s2:second string
 * @n:the number of string two bytes
 * Return: NULL or concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
char *s;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

if (n < _strlen(s2))
	s = malloc(_strlen(s1) + n * sizeof(char) + 1);
else
	s = malloc(_strlen(s1) + _strlen(s2) + 1);

if (s == 0)
	return (NULL);

for (i = 0; s1[i] != '\0'; i++)
	s[i] = s1[i];

for (j = 0; s2[j] != '\0' && j < n; i++, j++)
	s[i] = s2[j];

s[i] = '\0';

return (s);
}
