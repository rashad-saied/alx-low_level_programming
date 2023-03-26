#include "main.h"

/**
 * print_alphabet_x10 - print small letter alphabet to stdout 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j = 0;

	do {
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	} while (j < 10);
}

