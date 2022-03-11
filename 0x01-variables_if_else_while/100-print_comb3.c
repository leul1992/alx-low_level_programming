#include<stdio.h>
/**
 * main-prints("two digit combinations")
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numx;
	int numy;

	for (numx = '0'; numx <= '9'; numx++)
		for (numy = '0'; numy <= '9'; numy++)
		{
			if (numx < numy)
			{
			putchar(numx);
			putchar(numy);
			if (numx != '8')
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	putchar('\n');
	return (0);
}
