#include "main.h"
#include <stdio.h>
/**
 * _count-counts the number of char in string
 * @c: the character in pointer format
 * Return: the length of string
 */
int _count(const char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _pow-power of a number
 * @n:the power
 * Return: result
 */
int _pow(int n)
{
	if (n > 0)
	{
		return (2 * _pow(n - 1));
	}

	return (1);
}
/**
 * binary_to_uint-converts a binary to to unsigned int
 * @b: the number in string format
 * Return: converted number
 * or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int count, i = 0, j;
	unsigned int num = 0;

	count = _count(b);
	while (b[i] != '\0')
	{
		j = count - 1;
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		if (count == 1 && b[i] == '1')
			num += 1;
		else
		{
			if (b[i] == '1')
			{
				num += _pow(j);
			}

		}
		count--;
		i++;
	}
	return (num);

}
