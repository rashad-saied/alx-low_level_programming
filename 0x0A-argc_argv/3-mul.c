#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 * @argc: number of arguments
 * @argv: pointer to an array of strings representing the arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int argv1, argv2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	argv1 = atoi(argv[1]);
	argv2 = atoi(argv[2]);
	printf("%d\n", argv1 * argv2);
	return (0);
}

