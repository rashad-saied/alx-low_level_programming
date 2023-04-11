#include "main.h"
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
	char *cpy;
	int i, len;

	len = strlen(str);
	cpy = (char *) malloc(sizeof(char) * len);
	for (i = 0; i < len; i++)
	{
		cpy[i] = str[i];
	}
	if (cpy == NULL || str == NULL)
		return (NULL);
	return (cpy);
}

