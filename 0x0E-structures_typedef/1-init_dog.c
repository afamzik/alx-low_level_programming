#include <stdio.h>
#include "dog.h"

/**
*init_dog - the program initialises dog data
*@d: the dog struct pointer
*@name: the name of the dog
*@age: dog age
*@owner: owner of dog
*Return: return nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
