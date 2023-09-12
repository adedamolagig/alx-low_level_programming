#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function initializes a variable of type struct_dog.
 * @d: A pointer to the struct dog to initialize.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: onwer of dog.
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
