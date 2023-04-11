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
	int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	cpy = (char *) malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	strcpy(cpy, str);
	return (cpy);
}

