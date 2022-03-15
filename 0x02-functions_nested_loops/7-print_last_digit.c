#include"main.h"
/**
 * print_last_digit - "prints the last digit of a number"
 * @n : number to be computed
 *Return: the last digit
 */
int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return (n % 10);
}
