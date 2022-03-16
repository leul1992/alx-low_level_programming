#include<stdio.h>
/**
 * main-compute multiples of 5 and 3
 * Return: (0)
 */
int main(void)
{
	int n = 1024;
	int sum = 0;

	while (n > 2)
	{
		if (n % 3 == 0 || n % 5 ==0)
			sum += n;
	}
	printf ("%d\n", sum);
	return (0);
}
