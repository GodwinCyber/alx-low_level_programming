#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to the struct dog
 * @name: pointer to the char dog name
 * @age: dog age
 * @owner:pointer to the char dog owner
 * Description: the function initialise the struct dog with value
 * for name, age and owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
