#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @d: number to be done
 * Return: value of the last digit
 */
int print_last_digit(int d)
{
	int last;

	last = d % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

