#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that create an array
 * @size: the size of the array
 * @c: the char to initialize the array with
 *
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *) malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}

