#include "main.h"
#include <string.h>

/**
 * prime_number_validation
 * @n: the number to be checked
 * @i: the divisor
 *
 * Return: integer with prime number
 */

int prime_number_validation(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (i > _sqrt_recursion(n))
		return (1);
	return (prime_number_validation(n, i + 1));
}

/**
 * prime_number_validation
 * @n: the number to be checked
 *
 * Return: integer with the prime number
 */

int is_prime_number(int n)
{
	return (prime_number_validation(n, 2));
}

