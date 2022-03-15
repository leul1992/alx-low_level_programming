#include<main.h>
/**
 * print_alphabet-"alphabet in lowercase"
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
