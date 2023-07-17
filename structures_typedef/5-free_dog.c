#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free a dogs struct
 *
 * @dog: the dog to be freed
*/

void free_dog(dog_t *dog)
{
	if (!dog)
		return;
	/*if (!dog->name)*/
		free(dog->name);
	/*if (!dog->owner)*/
		free(dog->owner);
	free(dog);
}
