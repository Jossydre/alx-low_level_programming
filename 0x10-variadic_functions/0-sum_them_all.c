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
	unsigned int sum = 0, i;
	va_list dj;

	if (n == 0)
		return (0);

	va_start(dj, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(dj, int);
		}

	va_end(dj);
	return (sum);

}
