#include <stdio.h>
/**
 * print_diagsums-"print sum of two diagonal square matrix"
 * @a: the square matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0, sum2 = 0;

	while (i < size)
	{
		sum += a[i];
		sum2 += a[size - i - 1];
		a += size;
		i++;
	}
	printf("%d, ", sum);
	printf("%d\n", sum2);
}
