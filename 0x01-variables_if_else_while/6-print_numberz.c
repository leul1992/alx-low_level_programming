#include<stdio.h>
/**
 * main-prints("signle digit numbers")
 *
 * Return: Always 0 ("Success")
 */
int main(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
		putchar(i);
	putchar(10);
	return (0);
}
