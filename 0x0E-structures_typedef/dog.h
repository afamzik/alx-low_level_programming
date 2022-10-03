#ifndef DOG_H
#define DOG_H

/**
*dog_t - alias for dog struct
*/

typedef struct dog dog_t;

/**
* struct dog - the dog struct/structure dog
*@name: the name of dog
*@age: the age of dog
*@owner: the owner of dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char  *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
