#include "main.h"
/**
 * print_number-"prints an integer"
 * @n: the number to be printed
 * Return: void
 */
void print_number(int n)
{
	int i;
	int tmp;

	i = 10;
	while (n / i != 0)
		n * 10;
	while (i != 1)
	{
		i = i / 10;
		tmp = n / i;
		_putchar('0' + tmp);
		n = n % i;
	}
}
