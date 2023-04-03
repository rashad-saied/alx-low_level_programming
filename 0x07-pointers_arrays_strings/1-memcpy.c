#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n of bytes from memory area to another
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int dest_len;

	dest_len = strlen(dest);
	for (i = 0; i < n; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	return (dest);
}

