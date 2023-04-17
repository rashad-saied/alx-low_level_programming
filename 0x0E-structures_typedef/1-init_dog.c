#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to struct d
 * @name: a pointer to the dog name
 * @age: the dog age
 * @owner: a pointer to the dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

