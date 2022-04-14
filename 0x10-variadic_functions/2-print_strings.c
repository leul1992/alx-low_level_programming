#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings-print strings followed by a new line
 * @separator:string to be printed between the strings
 * @n:the number of strings passed
 * Return:nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	char *c;
	va_start(ap, n);
	
	for (i = 0; i < (int)(n); i++)
	{
		c = va_arg(ap, char*);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");

		if (i != (int)(n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
