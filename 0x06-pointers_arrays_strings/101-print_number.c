#include "main.h"
/**
 * print_number-"prints an integer"
 * @n: the number to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = 1;

	if (n == 0)
		_putchar('0' + n);
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	while (n / i != 0)
	{
		i = i * 10;
	}
	i = i / 10;
	while (n != 0)
	{
		_putchar('0' + n / i);
		n = n % i;
		i = i / 10;
	}

}
