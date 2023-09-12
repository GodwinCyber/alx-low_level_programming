#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog -  frees dogs.
 * @d: pointer to the dog struct
 * Descriptio: The function free the memory allocated to
 * dog and dog member and check if the pointer to the dog
 * is NULL to avoid deferencing a NULL pointer.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
