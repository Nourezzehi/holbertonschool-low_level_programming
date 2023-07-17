#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free a dogs struct
 * 
 * @dog_t: the dog to be freed
*/

void free_dog(dog_t *dog)
{
    free(dog);
    free(dog->name);
    free(dog->owner);
}