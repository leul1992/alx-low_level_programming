#include<stdio.h>
#include"main.h"
/**
 * main-"prints word"
 * Return: (0)
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i < str.length())
	{
	_putchar(str[i]);
	i++
	}
	_putchar('\n');
	return (0);
}
