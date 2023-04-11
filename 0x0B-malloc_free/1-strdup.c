#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - allocate a new space in memory for the duplicated string
 * @str: the string which will be duplicated
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *cpy;
	int i, len;

	len = strlen(str);
	cpy = (char *) malloc(sizeof(char) * len);
	if (cpy == NULL || str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		cpy[i] = str[i];
	}
	free(cpy);
	return (cpy);
}

