#include"main.h"
/**
 * _abs-"compute the absolute value"
 * @n: number to compute
 * Return: the absolute value of a number
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else if (n < 0)
		return (n * -1);
}
