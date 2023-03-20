#include "dog.h"

/**
 * init_dog - function that initialize a variable type
 * @d: variable initialized
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
