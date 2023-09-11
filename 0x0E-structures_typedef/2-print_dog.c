#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  prints a struct dog
 * @d: the pounter to the struct dog
 * Description: The funtcion print the element of the
 * struct dog, handling value by printing (NILL) for name,
 * age, or owner if they are NULL
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
