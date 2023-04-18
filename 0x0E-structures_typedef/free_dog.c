#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees memory allocated for a dog object
* @d: pointer to a dynamically allocated dog object
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

