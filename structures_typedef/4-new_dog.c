#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dogs name
 *
 * @age: dogs age
 *
 * @owner: dogs owner
 *
 * Return: dogs profile
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	new_dog->name = (char *) malloc((strlen(name) + 1) * sizeof(char));
	if (!new_dog->name)
		return (NULL);
	new_dog->owner = (char *) malloc((strlen(owner) + 1) * sizeof(char));
	if (!new_dog->owner)
		return (NULL);
	new_dog->name = name;
	new_dog->owner = owner;
	new_dog->age = age;
	return (new_dog);
}
