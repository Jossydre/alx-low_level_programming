#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: smallest number in the array
 * @max: lagrest value in the array
 *
 * Return: pointer to the address of the memory block
 */

int *array_range(int min, int max)
{
	int *m;
	int i, j = 0;

	if (min > max)
		return (NULL);
	m = malloc(sizeof(*m) * ((max - min) + 1));
	if (m != NULL)
	{
		for (i = min; i <= max; i++)
		{
			m[j] = i;
			j++;
		}
		return (m);
	}
	else
		return (NULL);

}
