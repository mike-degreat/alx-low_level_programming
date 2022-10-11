#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to structure
 * @name: pointer to name of dog
 * @age: pointer to age of dog
 * @owner: pointer to the owner of the dog
 *
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
