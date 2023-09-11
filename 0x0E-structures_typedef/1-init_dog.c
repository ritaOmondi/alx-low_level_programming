#include "dog.h"
#include <stdio.h>
/**
 *init_dog  - Function initializes a variable of type struct dog
 *@d : The dog structure
 *@name : dog's name
 *@age : age of the dog
 *@owner : owner of the dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
