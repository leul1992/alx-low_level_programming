#include<stdio.h>
/**
 * main-prints("base 16 numbers")
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (ch = 'a'; ch < 'g'; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
