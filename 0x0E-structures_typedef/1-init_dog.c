#include "dog.h"

/**
 * init_dog - a function that initialize a dog object
 *
 * @d: a pointer to the dog object
 * @name: name of the dog to be assigned with
 * @age: age of the dog to be assigned with
 * @owner: owner's name that owns the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
