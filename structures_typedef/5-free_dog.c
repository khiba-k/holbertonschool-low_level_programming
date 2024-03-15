#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - funcion frees dog
 * @d: pointer to dog to free
 * Return: None
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
