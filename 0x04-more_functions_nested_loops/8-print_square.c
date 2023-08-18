#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int row, column;

	for (row = 1 ; row <= size ; row++)
	{
		for (column = 1 ; column <= size ; size++)
			_putchar('#');
		_putchar('\n');
	}
}