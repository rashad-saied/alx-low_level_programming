#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 402;
	reset_to_98(&n);
	printf("%d", n);
	return (0);
}

