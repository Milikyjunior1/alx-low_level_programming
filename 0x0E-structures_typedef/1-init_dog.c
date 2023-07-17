#include "dog.h"
#include <stdio.h>
/**
 * main - Entry block
 * Return: Always 0
 * init_dog - for initialising 
 * @name: thwt name of the dog owner 
 * @age: the age of the dog 
 * @owner: the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
