#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dogs
 *
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - allias for struct
 * @name: element 1
 * @age: element 2
 * @owner: 3rd element
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
