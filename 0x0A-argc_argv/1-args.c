#include <stdio.h>
/**
 * main-"print the number of arguments"
 * @argc:number of arguments(int)
 * @argb:pointer to argument array
 * Return : (0)
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}