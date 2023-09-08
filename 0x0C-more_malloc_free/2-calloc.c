#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory using malloc and initialize it to zero
 * @nmemb: number of elements
 * @size: size of the memory block to be allocated
 *
 * Return: poiner to the address of the memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			m[i] = 0;
		return (m);
	}
	else
		return (NULL);
}
