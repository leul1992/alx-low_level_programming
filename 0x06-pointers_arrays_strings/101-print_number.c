#include "main.h"
/**
 * print_number-"prints an integer"
 * @n: the number to be printed
 * Return: void
 */
void print_number(int n)
{
	int d = 1, i = 0, itmp = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / d != 0)
	{
		d *= 10;
		i++;
	}
	d = d / 10;

	while (itmp < i)
	{
		_putchar('0' + n / d);
		n = n - (n / d) * d;
		d = d / 10;
		itmp++;
	}

	if (i == 0)
		_putchar('0' + n);

}
