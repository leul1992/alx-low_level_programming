#include<stdio.h>

/**
 * main- Prints("Alphabets in lowercase")
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
