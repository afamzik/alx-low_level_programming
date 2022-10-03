#include <stdio.h>
#include "dog.h"

/**
*print_dog - print the dog info
*@d: this is the dog struct variable
*Return: this returns nil if d == NULL
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("name: (nil)\n");
	}
	else
		printf("name: %s\n", d->name);

	if (d->age == '\0')
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("owner: (nil)\n");
	}
	else
		printf("owner: %s\n", d->owner);

}
