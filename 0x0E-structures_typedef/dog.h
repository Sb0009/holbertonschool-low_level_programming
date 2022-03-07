#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog ID.
 * @name: Poppy- name.
 * @age:  Poppy -age.
 * @owner: Dog's owner Bob.
 **/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} description;

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
