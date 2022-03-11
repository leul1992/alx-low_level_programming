#include<stdio.h>
/**
 * main-prints("number combinations")
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '9')
		{
			putchar(i);
			putchar('$');
		}
		else
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
