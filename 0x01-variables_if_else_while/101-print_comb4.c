#include<stdio.h>
/**
 * main-prints("combination of three digits")
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = '0'; num1 <= '9'; num1++)
		for (num2 = '0'; num2 <= '9'; num2++)
			for (num3 = '0'; num3 <= '9'; num3++)
				if (num1 < num2 && num2 < num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num3 != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
	putchar(10);
	return (0);
}
