#include <stdlib.h>
/**
 * _memset-allocates memory for an array
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (size == 0 || nmemb == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == 0)
		return (NULL);
	_memset(s, 0, nmemb * size);
	return (s);
}
