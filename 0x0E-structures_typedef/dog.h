#ifndef _DOG_
#define _DOG_

/**
 * struct dog - dog interface
 *
 * @name: Name to dog
 *
 * @age: dog age
 *
 * @owner: Owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
