#include<stdio.h>
/**
 * main- "prints fibonacci of first 98"
 * Return: (0)
 */
int main(void)
{
	unsigned long int prev = 0;
	unsigned long int curr = 1;
	int count = 0;
	unsigned long int temp;

	while (count < 98)
	{
		temp = prev + curr;
		prev = curr;
		curr = temp;
		printf("%lu", temp);
		if (count < 97)
			printf(", ");
		count++;
	}
	printf("\n");
	return (0);
}
