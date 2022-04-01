#include <stdio.h>
#include <stdlib.h>
/**
 * check_int - check for integer
 * @s:the string to check
 * Return 0 or 1
 */
int check_int(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
/**
 * main - add positive integers
 * @argc : the number of arguments
 * @argv : list of arguments
 * Return : (0)
 */
int main(int argc, char const **argv)
{
	int sum = 0;
	while (--argc)
	{
		if (check_int(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}

	printf("%i\n", sum);
	return (0);
}
