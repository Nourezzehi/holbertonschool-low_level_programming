#ifndef HEADER_H
#define HEADER_H

/**
 * struct dog - defines a structure
 *
 * @name: a string
 *
 * @age: an int
 *
 * @owner: the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
typedef struct dog dog_t;
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);

#endif
