#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the binary number in string format
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	unsigned int len;
	unsigned int i, j;

	if (b == NULL)
		return (0);
	len = strlen(b);
	i = 1;
	num = 0;
	while (len--)
	{
		if (b[len] == '0')
		{
			j = 0;
		}
		else if (b[len] == '1')
		{
			j = 1;
		}
		else
		{
			return (0);
		}
		num += (j * i);
		i *= 2;
	}
	return (num);
}

