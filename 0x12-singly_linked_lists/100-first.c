#include <stdio.h>
#include <stdlib.h>
/**
 * befor_main-prints before main function
 * Return:nothing
 */
void befor_main(void) __attribute__((constructor));
void befor_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
