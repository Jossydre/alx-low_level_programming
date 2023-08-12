#include <stdio.h>
/**
 * main - Print alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	char c;
	char i;

	c = 'a';
	i = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(i <= 'Z') {
			putchar(i);
			i++;
		}
	putchar('\n');
	return (0);
}
