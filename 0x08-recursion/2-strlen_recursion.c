#include "main.h"
/**
 * _strlen_recursion-"return the length of a string"
 * @s: pointer to the string
 * Return: (s)
 */
int _strlen_recursion(char *s)
{
	int count = 1;

	if (*s == '\0')
		return (0);
	else
	{
		return (count + _strlen_recursion(s + 1));
	}
}
