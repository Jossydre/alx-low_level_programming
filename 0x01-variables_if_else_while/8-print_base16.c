#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int d;
	char m;

	d = 0;
	m = 'a';
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(m <= 'f') {
			putchar(m);
			m++;
		}
	putchar('\n');
	return (0);
}
