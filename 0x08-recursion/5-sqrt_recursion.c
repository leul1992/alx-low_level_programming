#include "main.h"
/**
 * _sqrt_recursion-return natural square root
 * @n:the number
 * Return:square root(success)
 * -1(failure)
 */
int _sqrt_recursion(int n)
{
	return (_check_square(n, 1));
}
/**
 * _check_square-check number square
 * @n:the number to check for sqaureroot
 * @num:number to be squared
 * Return: number(success)
 * -1 (failure)
 */
int _check_square(int n, int num)
{
	if (n == num * num)
		return (num);
	else if (n < num * num)
		return (-1);
	return (_check_square(n, num + 1));
}
