#include <string.h>
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize the struct
 *
 * @d: dogs structure
 *
 * @name: dogs name
 *
 * @age: dogs age
 *
 * @owner: dogs owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = (char *) malloc(strlen(name) * sizeof(char) + 1);
	d->owner = (char *) malloc(strlen(owner) * sizeof(char) + 1);
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
