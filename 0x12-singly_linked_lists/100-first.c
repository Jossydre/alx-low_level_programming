#include <stdio.h>

void __attribute__((constructor)) fast(void);

/**
 * fast - Prints a string before the
 *   main function is executed.
 */
void fast(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
