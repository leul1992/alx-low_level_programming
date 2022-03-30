#include "main.h"
/**
 * _pow_recursion-"return the the power raised by a number of a number"
 * @x:the number to be raised
 * @y:the number to raise another
 * Return:result
 */
int _pow_recursion(int x, int y)
{
	int prod = 1;

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	prod = x * _pow_recursion(x, y - 1);
	return (prod);
}
