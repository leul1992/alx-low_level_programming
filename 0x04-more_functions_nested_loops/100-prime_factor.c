#include <stdio.h>
/**
 * main-"print the prime factor of a number"
 * Return: (0)
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int n;

	n = 2;
	while (num != 1)
	{
		if (num % n == 0)
			num = num / n;
		else
			n++;
	}
	printf("%lu\n", n);
	return (0);
}
