#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Function that frees dog
 * @d : first member
 *
 * Return : nothing
 */
void free_dog(dog_t *d)
{

	if (d != NULL)
	{
	free(d->owner);
	free(d->name);
	free(d);
	}
}
