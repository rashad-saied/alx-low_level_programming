#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int small_alpha, capital_alpha;

	for (small_alpha = 97; small_alpha <= 122; small_alpha++)
	{
	putchar(small_alpha);
	}
	for (capital_alpha = 65; capital_alpha <= 90; capital_alpha++)
	{
	putchar(capital_alpha);
	}
	putchar('\n');
	return (0);
}

