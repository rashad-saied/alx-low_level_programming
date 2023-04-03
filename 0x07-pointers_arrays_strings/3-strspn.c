#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the substring
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n, s_len, acc_len;

	s_len = strlen(s);
	acc_len = strlen(accept);
	n = 0;
	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < acc_len; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (j == acc_len)
		{
			return (n);
		}

		n++;
	}
	return (n);
}

