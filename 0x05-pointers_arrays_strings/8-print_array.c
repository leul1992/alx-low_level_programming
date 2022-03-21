#include<stdio.h>
/**
 * print_array-"print array of integers"
 * @a: the array
 * @n: number of elements
 * Return:(0)
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (; i < n; i++)
	{
		if (i == n - 1)
			printf("%i", a[i]);
		else
			printf("%i, ", a[i]);
	}
	putchar('\n');
}
