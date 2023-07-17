#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free a dogs struct
 * 
 * @dog_t: the dog to be freed
*/

void free_dog(dog_t *dog)
{
	if (!dog)
	{
		free(dog);
		return;
	}
	if (!dog->name)
		free(dog->name);
	if (!dog->owner)
		free(dog->owner);
}
