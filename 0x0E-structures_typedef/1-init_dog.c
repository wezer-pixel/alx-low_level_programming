#include "dog.h"
/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer to the struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d !== NULL)
	{
		d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
