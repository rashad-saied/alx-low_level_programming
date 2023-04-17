#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: a pointer to the name of the dog
 * @age: a pointer to the age of the dog
 * @owner: a pointer to the owner of the dog
 *
 * Return:  a pointer to dog_t type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j, name_len, owner_len;

	name_len = strlen(name) + 1;
	owner_len = strlen(owner) + 1;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(name_len);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(owner_len);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
	{
		*(dog->name + i) = name[i];
	}
	for (j = 0; j < owner_len; j++)
	{
		*(dog->owner + j) = owner[j];
	}
	dog->age = age;
	return (dog);
}

