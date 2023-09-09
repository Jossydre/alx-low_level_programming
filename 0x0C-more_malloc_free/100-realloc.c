#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size of ptr
 * @new_size: size of the new memory to be allocated
 * 
 * Return: pointer to the address of the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	unsigned int i;

	if (ptr == NULL)
	{
		m = malloc(new_size);
		return (m);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		m = malloc(new_size);
		if (m != NULL)
		{
			for (i = 0; i < (old_size, new_size); i++)
				*((char *)m + i) = *((char *) ptr + i);
			free(ptr);
			return (m);
		}
		else
			return (NULL);
	}
}
