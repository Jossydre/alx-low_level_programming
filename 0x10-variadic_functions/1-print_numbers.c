#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: strings to be printed between numbers
 * @n: number to be printed
 * @...: variadic argument
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list dre;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	if (separator == 0)
		separator = "";

	va_start(dre, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(dre, int), separator);
		printf("%d\n", va_arg(dre, int));
	}

	va_end(dre);
}

