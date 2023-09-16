#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that print strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variadic argument
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list gem;
	char *joy;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(gem, n);

	for (i = 0; i < n - 1; i++)
	{
		joy = va_arg(gem, char *);
		if (joy)
			printf("%s", joy);
		else
			printf("(nil)");
		if (separator)
			printf("%s", separator);
	}
	joy = va_arg(gem, char *);
	if (joy)
		printf("%s\n", joy);
	else
		printf("(nil)\n");
	va_end(gem);
}
