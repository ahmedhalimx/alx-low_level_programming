#ifndef DOG_H
#define DOG_H

/**
* struct dog - a dog's object
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* Description: Noting To Add
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/*
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

