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
 * struct Dog_T - allias for struct
 * @name: element 1
 * @age: element 2
 * @owner: 3rd element
 */
struct Dog_T
{
	char *name;
	float age;
	char *owner;
};
typedef struct Dog_T dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
