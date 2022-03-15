#include"main.h"
/**
 * print_sign-print the sign of a number
 * @n: check if it is a sign number
 * Return: (1) if it is greater than 0
 * (0) if it is zero, (-1) if it is less than 0
 */
int print_sign(int n)
{
	int ch;

	if (n > 0)
	{
		ch = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		ch = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		ch = -1;
		_putchar('-');
	}
	return (ch);
}
