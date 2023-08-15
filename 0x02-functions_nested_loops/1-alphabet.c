#include "main.h"
/**
 *  print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
		_putchar(d);
	_putchar ('\n');
}
