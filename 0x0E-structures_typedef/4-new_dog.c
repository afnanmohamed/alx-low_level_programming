#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * new_dog - a function that creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *newName, *newOwner;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newName = malloc(sizeof(char) * (strlen(name) + 1));
	if (newName == NULL)
	{
		free(newDog);
		return (NULL);
	}
	strcpy(newName, name);

	newOwner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (newOwner == NULL)
	{
		free(newName);
		free(newDog);
		return (NULL);
	}
	strcpy(newOwner, owner);

	newDog->name = newName;
	newDog->age = age;
	newDog->owner = newOwner;

	return (newDog);
}
