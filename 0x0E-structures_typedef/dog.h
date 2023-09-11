#ifndef _HEADER_
#define _HEADER_
#include <stdio.h>
/**
 * struct dog - defines the variables of a dog
 *@name : first member
 *@age : second parameter
 *@owner : third parameter
 * Return : Always (0) success
 */
struct dog
{

	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
