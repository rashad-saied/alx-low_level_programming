#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, let;

	for (num = 48; num <= 57; num++)
	{
	putchar(num);
	}
	for (let = 97; let <= 102; let++)
	{
	putchar(let);
	}
	putchar('\n');
	return (0);
}

