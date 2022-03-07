#include <stdio.h>
#include "dog.h"
/**
 * init_dog - free data structure
 * @d : pointer
 * @name : pointer
 * @age : float
 * @owner : pointer
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;

	d->age = age;

	d->owner = owner;
	}
}
