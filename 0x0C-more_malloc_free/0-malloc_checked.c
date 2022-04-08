#include <stdlib.h>
/**
 * malloc_checked-allocate memory
 * @b:unsigned int
 * Return:pointer or 98
 */
void *malloc_checked(unsigned int b)
{
	int *num;
	num = malloc(b);
	if (num == 0)
		exit(98);
	return (num);
}
