#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = i * j;
			printf("%d", r);
			if (j != 9)
			{
				printf(", ");
				if (r < 10)
				printf(" ");
			}
		}
		printf("\n");
	}
}

