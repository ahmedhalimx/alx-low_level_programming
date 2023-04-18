#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
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
	strcpy(ptrdog->owner, owner);
	return (ptrdog);
}
