#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers-prints numbers followed by new line
 * @separator: string between numbers
 * @n: first number to be printed
 * Return:nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = 0, j = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < (int)(n); i++)
	{
		if (i != 0 && separator != NULL)
			while (separator[j] != '\0')
			{
				printf("%c", separator[j]);
				j++;
			}
		j = 0;
		printf("%i", va_arg(ap, int));
	}
	printf("\n");
}
