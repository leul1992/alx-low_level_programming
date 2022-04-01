#include <stdio.h>
/**
 * main-"print the number of arguments passed into it"
 * @argc:number of arguments(int)
 * @argb:pointer to argument array
 * Return : (0)
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
