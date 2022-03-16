#include"main.h"
/**
 * print_times_table-"prints the times table"
 * @n: the value to print in times table
 * Return: (0)
 */
void print_times_table(int n)
{
	int num1 = 0, prod, num2;

	if (n < 0 || n > 15)
		return;
	while (num1 <= n)
	{
		for (num2 = 0; num2 <= n; num2++)
		{
			prod = num1 * num2;
			if (num2 == 0)
				_putchar('0' + prod);
			else if (prod < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
			}
			else if (prod < 100)
			{
				_putchar(' ');
				_putchar('0' + prod / 10);
				_putchar('0' + prod % 10);
			}
			else
			{
				_putchar('0' + prod / 100);
				_putchar('0' + (prod - 100) / 10);
				_putchar('0' + prod % 10);
			}
			if (num2 < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
			num1++;
	}
}
