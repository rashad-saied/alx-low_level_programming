#include "main.h"
#include <stdlib.h>

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
	unsigned int *cast;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	loc = malloc(sizeof size * nmemb);
	if (loc == NULL)
		return (NULL);
	cast = loc;
	for (i = 0; i < nmemb; i++)
	{
		*cast++ = 0;
	}
	return (loc);
}

