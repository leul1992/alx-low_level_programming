#include <stdio.h>
/**
 * main-"fizz on multiple of three and buzz on multiple of five"
 * Return: (0)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("buzz");
		else if (i % 3 == 0)
			printf("fizz ");
		else if (i % 5 == 0 && i != 100)
			printf("buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
