#include "main.h"
/**
 * _isdigit - checks for a digit 0 through 9
 * @c: digit to be checked
 * Return: 1 for digit or 0 for anythinf else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
