#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: My_dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}

	my_dog->name = malloc(sizeof(char) * strlen(name));
	my_dog->owner = malloc(sizeof(char) * strlen(owner));

	strcpy(my_dog->name, name);
	my_dog->age = age;
	strcpy(my_dog->owner, owner);

	if (my_dog->name == NULL && my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
	}

	return (my_dog);
}
