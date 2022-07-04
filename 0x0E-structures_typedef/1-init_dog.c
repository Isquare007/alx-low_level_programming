#include "dog.h"
#include <stdlib>

/**
  * init_dog - initialize variable
  * @d: dog to be initialized
  * @name: name of dog
  * @owner: owner of dog
  * @age: age of dog
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
