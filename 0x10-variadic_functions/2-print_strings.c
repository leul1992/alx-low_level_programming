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
	int i, j;
	va_list ap;
	char *c;

	va_start(ap, n);

	for (i = 0; i < (int)(n); i++)
	{
		c = va_arg(ap, char*);
		j = 0;
		if (i != 0 && separator[j] != '\0')
		{
			while (separator[j] != '\0')
			{
				printf("%c", separator[j]);
				j++;
			}
		}
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");

	}
	va_end(ap);
	printf("\n");
}
