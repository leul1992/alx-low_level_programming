#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main-multiply two numbers
 * Return-98(fail)
 */
int main(int argc, char const **argv)
{
	(void) argc;

	int *mul, i = 0, num1, num2;

	mul = malloc(sizeof(int) * 2);
	num1 = argv[0] - '0';
	num2 = argv[1] - '0';
	mul = num1 * num2;
	if (mul == 0)
	{
		printf("Error");
		exit (98);
	}
	else
		while (mul[i] != '\0')
		{
			_putchar(mul[i] + '0');
			i++;
		}
	return (0);
}
