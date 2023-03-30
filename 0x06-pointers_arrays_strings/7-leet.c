#include "main.h"
#include <ctype.h>

/**
 * leet - encodes a string into 1337.
 * @str: the string to be ecoded.
 *
 * Return: pointer to string
 */

char *leet(char *str)
{
	int i;
	char *ptr = str;

	char letters[] = "aeotl";
	char numbers[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		int j;

		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
			{
				str[i] = numbers[j];
				break;
			}
		}
	}

	return (ptr);
}

