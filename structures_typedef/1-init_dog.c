#include "dog.h"
/**
 * init_dog - initialize variable of structure
 * @d: is the pointer of structure
 * @name: the name of dog
 * @age: age of dog
 * @owner: the owner of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
