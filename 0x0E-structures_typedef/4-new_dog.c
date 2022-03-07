#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog.
 * @name: value (dog's name).
 * @age: value (dog's age).
 * @owner: value (dog's owner).
 * rex : adress string
 * Return: Succes 0
 */





dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *rex;
	int i;
	int j;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	rex = malloc(sizeof(dog_t));

	if (rex  == 0 || name == 0 || owner == 0)
	{
		return (NULL);
	}

	rex->name = malloc(sizeof(char) * (i + 1));
	rex->owner = malloc(sizeof(char) * (j + 1));

	if (rex->name == 0 || rex->owner == 0)
	{
		free(rex);
		free(rex->owner);
		free(rex->name);
		return (NULL);
	}

	for (i = 0; name[i] != 0; i++)
		rex->name[i] = name[i];
	rex->name[i] = 0;

	rex->age = age;

	for (j = 0; owner[j] != 0; j++)
		rex->owner[j] = owner[j];
	rex->owner[j] = 0;
	return (rex);
}
