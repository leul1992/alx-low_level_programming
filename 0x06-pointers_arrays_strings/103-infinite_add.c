#include "main.h"
/**
 * infinite_add-"add two numbers"
 * @n1:number one
 * @n2:number two
 * @r:buffer
 * @size_r:buffer size
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, temp;

	while (i != size_r)
	{
		temp = (n1 - '0') + (n2 - '0');
		r[i] = temp + '0';
		i++;
	}
}
