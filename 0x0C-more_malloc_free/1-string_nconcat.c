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
	unsigned int strln1,strln2, i = 0, j = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	strln1 = _strlen(s1);
	strln2 = _strlen(s2);
	if (n > strln2)
	{
		n = strln2;
	}
	s = malloc(strln1 + n);
	if (s == 0)
		return (NULL);
	while (i != strln1)
	{
		s[i] += s1[i];
		i++;
	}
	while (j != n)
	{
		s[i] += s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
