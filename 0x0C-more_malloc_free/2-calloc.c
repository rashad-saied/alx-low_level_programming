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
	unsigned int i, j;
	unsigned char* cast;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size; 
	loc = malloc(j);
	if (loc == NULL)
		return (NULL);
	cast = loc;
	for (i = 0; i < j; i++)
	{
		*(cast + i) = 0;	
	}
	return (loc);
}

