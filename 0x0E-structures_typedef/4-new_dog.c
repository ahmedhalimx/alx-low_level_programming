#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * new_dog - creates a dog object
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a pointer to a dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *o = owner, n = name;
	
	dog_t *ptrdog;
	
	ptrdog = malloc(sizeof(dog_t));

	if (ptrdog == NULL)
		return (NULL);

	ptrdog->name = malloc(strlen(name) + 1);
	if (ptrdog->name == NULL)
	{
		free(ptrdog);
		return (NULL);
	}

	ptrdog->owner = malloc(strlen(owner) + 1);
	if (ptrdog->owner == NULL)
	{
		free(ptrdog);
		free(ptrdog->name);
		return (NULL);
	}

	ptrdog->age = age;
	strcpy(ptrdog->name, name);
	strcpy(ptrdog->owner, owne);
	return (ptrdog);
}

