#include <stdio.h>

/**
 * main - check the code for ALX School students.
 * @argc: number of arguments
 * @argv: pointer to an array of strings representing the arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

