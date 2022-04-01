#include <stdio.h>
#include <stdlib.h>
/**
 * main-multiply numbers
 * @argc:argument number
 * @argv:list of argument
 * Return : (0)
 */
int main(int argc, char const **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
