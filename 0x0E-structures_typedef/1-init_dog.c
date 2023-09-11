#include <stdlib.h>
#include "dog.h"

/**
 * poppy_dog - initilize dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * @d: dog structure
 *
 * Return: nothing
 */
void poppy_dog(struct dog *d, char *name, float *age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
