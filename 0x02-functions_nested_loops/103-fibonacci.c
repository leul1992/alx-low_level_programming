#include<stdio.h>
/**
 * main-"prints fibonacci not exceeding 4,000,000
 * Return: (0)
 */
int main(void)
{
	int prev = 0;
	int curr = 1;
	int max;
	int sum = 0;

	while (max < 4000000)
	{
		max = prev + curr;
		prev = curr;
		curr = max;
		if (max % 2 == 0)
			sum += max;
	}
	printf("%i\n", sum);
	return (0);
}
