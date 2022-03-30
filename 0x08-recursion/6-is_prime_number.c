#include "main.h"
/**
 * is_prime_number-"checks number if it is prime"
 * @n: the number
 * Return: 1(success)
 * 0 (failure)
 */
int is_prime_number(int n)
{
	return (_check(n, 2));
}
/**
 * _check-checks the numbers divisibility
 * @n:the number
 * @x:the divisor
 * Return: integer
 */
int _check(int n, int x)
{
	if (x >= n && n > 1)
		return (1);
	else if (n % x == 0 || n <= 1)
		return (0);
	else
		return (_check(n, x + 1));
}
