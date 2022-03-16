#include<stdio.h>
/**
 * main-"prints fibonacci not exceeding 4,000,000
 * Return: (0)
 */
int main(void)
{
	long int prev = 0;
	long int curr = 1;
	long int max;
	long int temp;

	while (max < 4000000)
	{
		if (2 * curr + prev < 4000000)
			printf("%lu", prev + curr);
		else
			printf("%lu, ", prev + curr);
		temp = curr;
		curr = prev + curr;
		prev = temp;
		max = prev + curr;
	}
	printf("\n");
	return (0);
}
