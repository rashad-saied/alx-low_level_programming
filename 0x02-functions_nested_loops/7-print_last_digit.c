#include "main.h"

/**
 * print_last_digit - print the last integer of an integer
 * @x : The integer to be checked
 *
 * Return: 1 (+ number) , 0 (is zero), -1 (- number)
 */

int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		x = -x;
	}
	y = x % 10;

	_putchar('0' + y);
	return (y);
}

