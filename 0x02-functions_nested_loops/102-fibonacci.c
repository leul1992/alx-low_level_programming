#include<stdio.h>
/**
 * main-"prints fibonacci"
 * Return: (0)
 */
int main(void)
{
	int prev = 0;
	int curr = 1;
	int count = 0;
	int temp;

	while (count < 50)
	{
		printf("%lu, ",prev + curr);
		temp = curr;
		curr = prev + curr;
		prev = temp;
		count ++;
	}
	return (0);
}
