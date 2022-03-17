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
	int ic;

	i = 10;
	if (n < 0)
	{
		ic = n;
		n = -1 * n;
	}
	while (n / i != 0)
		i = i * 10;
	if (ic < 0)
		_putchar('-');
	while (n != 0)
	{
		i = i / 10;
		tmp = n / i;
		_putchar('0' + tmp);
		n = n % i;
	}


}
