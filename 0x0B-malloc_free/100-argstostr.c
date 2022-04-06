#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * argstostr-concatenate arguments of a program
 * @ac:argument counter
 * @av:pointer to argument array
 * Return:null or each argument passed
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, nc = 0;
	char *c;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++, nc++)
		nc += _strlen(av[i]);
	c = malloc(sizeof(char) * nc + 1);
	if (c == 0)
		return (NULL);
	i = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			c[k] = av[i][j];
		c[k] = '\n';
		k++;
	}
	c[k] = '\0';
	return (c);
}
