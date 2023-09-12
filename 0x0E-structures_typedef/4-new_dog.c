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
	int a, b, i;
	dog_t *dogn;

	a = strlen(name);
	b = strlen(owner);

	dogn = malloc(sizeof(dog_t));
	if (dogn == NULL)
	{
		return (NULL);
	}
	dogn->name = malloc((a + 1) * sizeof(char));
	dogn->owner = malloc((b + 1) * sizeof(char));

	if (dogn->name == NULL || dogn->owner == NULL)
	{
		free(dogn->name);
		free(dogn->owner);
		free(dogn);
		return (NULL);
	}
	for (i = 0; i < a; i++)
		dogn->name[i] = name[i];
	dogn->name[a] = '\0';
	dogn->age = age;

	for (i = 0; i < b; i++)
		dogn->owner[i] = owner[i];
	dogn->owner[b] = '\0';
	return (dogn);
}
