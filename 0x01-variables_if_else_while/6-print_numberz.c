#include<stdio.h>
/**
 * main-prints("signle digit numbers")
 *
 * Return: Always 0 ("Success")
 */
int main(void)
{
	int i = '0';

	while (i < '10')
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
