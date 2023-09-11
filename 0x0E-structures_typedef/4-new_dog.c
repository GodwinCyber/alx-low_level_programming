#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: pointer to the string dog name
 * @age: dog age
 * @owner: pointer to the string owner
 * Return: If fail return null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *new_copy;
	char *owner_copy;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}
	new_copy = strdup(name);
	owner_copy = strdup(owner);

	if (new_copy == NULL || owner_copy == NULL)
	{
		free(new_dog_ptr);
		free(new_copy);
		free(owner_copy);
		return (NULL);
	}
	new_dog_ptr->name = new_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}
