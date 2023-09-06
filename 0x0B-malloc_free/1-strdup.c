#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory
 * @str: String
 * Return: Pointer of char array
 */
char *_strdup(char *str)
{
	char *d;
	int m = 0;
	int b = 0;

	if (str == NULL)
		return (NULL);
	for (; str[b] != '\0'; b++)
		m++;
	d = malloc(m * sizeof(char) + 1);
	if (d == NULL)
		return (NULL);
	b = 0;

	for (b = 0; b <= m; b++)
		d[b] = str[b];
	return (d);
}
