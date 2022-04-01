#include <stdio.h>
/**
 * main-print all the arguments
 * @argc:the number of arguments
 * @argv:the pointer to argument array
 * Return: (0)
 */
int main(int argc, char const *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
