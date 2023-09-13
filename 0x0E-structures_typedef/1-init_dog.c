#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: struct dod to be initialized
 * @name: name to be initialized
 * @age: age to be initialized
 * @owner: owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == NULL)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
