#include<stdio.h>
/**
 * main-prints("two two digit combination")
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	for (num1 = '0'; num1 <= '9'; num1++)
		for (num2 = '0'; num2 <= '9'; num2++)
			for (num3 = '0'; num3 <= '9'; num3++)
				for (num4 = '0'; num4 <= '9'; num4++)
				{
					if (num1 * 10 + num2 < num3 * 10 + num4)
					{
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);
					if (num1 != '9' && num2 != '8' && num3 != '9' && num4 != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
				}
	putchar('\n');
	return (0);
}
