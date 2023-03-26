#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@x : The integer to be checked
 *
 * Return: 1 (+ number) , 0 (is zero), -1 (- number)
 */

int _abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}



