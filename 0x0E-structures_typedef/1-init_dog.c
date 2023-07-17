#include "dog.h"
#include <stdio.h>
/**
 * init_dog - for initialising
 * @name: thwt name of the dog owner
 * @age: the age of the dog
 * @owner: the dog owner
 * @d: for parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (*d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
