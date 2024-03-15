#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 *struct dog - structure
 *@name: name of dog
 *@age: age of owner
 *@owner: name of dog ownet
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} type;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
