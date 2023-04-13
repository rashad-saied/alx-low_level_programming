#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the previously allocated memory
 * @old_size: the size of the old memory block
 * @new_size: the size of the new memory block
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *space;
	unsigned int *new_buffer, *old_buffer;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		space = malloc(new_size);
		if (space == NULL)
			return (NULL);
		new_buffer = space;
		old_buffer = ptr;
		for (i = 0; i < old_size; i++)
		{
			*(new_buffer + i) = *(old_buffer + i);
		}
		free(ptr);
	}
	return (space);
}

