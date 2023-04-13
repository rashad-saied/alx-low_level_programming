#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates a memory for an array
 * @nmemb: the number of elements
 * @size: the size of each element
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *loc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	loc = malloc(nmemb * size);
	if (loc == NULL)
		return (NULL);
	for (i = 0; i < nmemb ; i++)
	{
		memset((char *)loc + i * size, 0, size);
	}
	return (loc);
}

