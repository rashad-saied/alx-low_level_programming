#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string.
 * @str: the string to be capitalized.
 *
 * Return: pointer to string
 */

char *cap_string(char *str)
{
	int i;
	char *ptr = str;
	int cap_next;

	cap_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isspace(str[i]) || ispunct(str[i]))
		{
			cap_next = 1;
		}
		else if (cap_next)
		{
			str[i] = toupper(str[i]);
			cap_next = 0;
		}
	}

	return (ptr);
}

