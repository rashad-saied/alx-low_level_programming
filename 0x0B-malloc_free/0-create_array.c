#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = (char *) malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	*arr = c;
	return (arr);
}

