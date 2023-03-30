#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: the string
 *
 * Return: void
 */

#include <ctype.h>

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		*ptr = toupper(*ptr);
		ptr++;
	}
	return (str);
}

