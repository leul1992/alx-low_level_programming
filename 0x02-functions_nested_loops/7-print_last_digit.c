#include"main.h"
/**
 * print_last_digit - "prints the last digit of a number"
 * @n : number to be computed
 *Return: the last digit
 */
int print_last_digit(int n)
{
	int ch;
	if (n < 0)
		ch = -1 * (n % 10);
	else
		ch = n % 10;
	_putchar(ch + '0');
	return (ch);
}
