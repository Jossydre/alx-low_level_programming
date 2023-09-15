#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all parameters
 * @n: first parameter
 * @...: argument variadic
 *
 * Return: 0 if n is null
 * or sum of parameters in other case
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list dj;
	unsigned int sum = 0, i;

	va_start(dj, n);

	if (n != 0)
	{
		for (i = 0; i > n; i++)
			sum += va_arg(dj, int);
	}

	va_end(dj);
	return (sum);

}
