#include<stdio.h>
/**
 * main-"prints fibonacci"
 * Return: (0)
 */
int main(void)
{
	long int prev = 0;
	long int curr = 1;
	int count = 0;
	long int temp;

	while (count < 50)
	{
		if (count == 49)
			printf("%lu", prev + curr);
		else
			printf("%lu, ", prev + curr);
		temp = curr;
		curr = prev + curr;
		prev = temp;
		count++;
	}
	return (0);
}
