#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat-concatenates two strings
 * @s1:string one
 * @s2:string two
 * Return : pointer to the concate or null
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	s = malloc(sizeof(char) * (size1 + size2) + 1);
	if (s == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			s[i] = s1[i];
		else
			s[i] = s2[i - size1];
	}
	s[i] = '\0';
	return (s);
}
