#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - new structure
 * @name : dog's name
 * @age : dog's age
 * @owner : dog's owner
 *
 * Return: Success
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *max_dog;
	int name_d = 0, own_d = 0;

	if (name != NULL && owner != NULL)
	{
	name_d = _strlen(name) + 1;
	own_d = _strlen(owner) + 1;
	max_dog = malloc(sizeof(dog_t));
	if (max_dog == NULL)
	return (NULL);
	max_dog->name = malloc(sizeof(char) * name_d);
	if (max_dog->name == NULL)
	{
	free(max_dog);
	return (NULL);
	}
	max_dog->owner = malloc(sizeof(char) * own_d);
	if (max_dog->owner == NULL)
	{
	free(max_dog->name);
	free(max_dog);
	return (NULL);
	}
	max_dog->name = _strcpy(max_dog->name, name);
	max_dog->owner = _strcpy(max_dog->owner, owner);
	max_dog->age = age;
	}
	return (max_dog);
}
/**
 *_strlen - Function that gives the length of a string
 *@s : string being counted
 *
 * Return: string length
 */
int _strlen(char *s)
{

	int c = 0;

	for (; *s != '\0'; s++)
	{
	c++;
	}
	return (c);
}
/**
 * _strcpy - Function that copies a string
 * @dest : destination string
 * @src : Source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
