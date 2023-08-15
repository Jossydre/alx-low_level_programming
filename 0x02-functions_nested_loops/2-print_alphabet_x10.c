#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	char d;
	int i;
	i = 1;

	{
		for (i = 1; i <= 10 ; i++)
		{
			for (d = 'a'; d <= 'z'; d++)
			{
				_putchar(d);
			}
			_putchar('\n');
		}
	}
}
