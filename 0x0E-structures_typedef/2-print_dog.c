#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: a pointer to struct d
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else if (d->age == 0 || d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}

