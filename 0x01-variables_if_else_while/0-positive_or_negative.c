#include<stdio.h>
/**
 * main- Prints("positve zero negative")
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		prints("is positive");
	else if (n == 0)
		prints("is zero");
	else
		prints("is negative");
	return (0);
}
