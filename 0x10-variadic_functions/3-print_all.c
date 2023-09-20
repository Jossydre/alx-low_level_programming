#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list dre;
	unsigned int n = 0, m, o = 0;
	char *str;
	const char d_arg[] = "cifs";

	va_start(dre, format);
	while (format && format[n])
	{
		m = 0;
		while (d_arg[m])
		{
			if (format[n] == d_arg[m] && o)
			{
				printf(", ");
				break;
			} m++;
		}
		switch (format[n])
		{
			case 'c':
				printf("%c", va_arg(dre, int)), o = 1;
				break;
			case 'i':
				printf("%d", va_arg(dre, int)), o = 1;
				break;
			case 'f':
				printf("%f", va_arg(dre, double)), o = 1;
				break;
			case 's':
				str = va_arg(dre, char *), o = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} m++;
	}
	printf("\n"), va_end(dre);
}
