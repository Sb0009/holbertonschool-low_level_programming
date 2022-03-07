#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Create new dog.
 * @name: value (dog's name).
 * @age: value (dog's age).
 * @owner: value (dog's owner).
 * Return: the new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nwn, olen, i;
	dog_t *PointerToDog;

	nwn = olen = 0;
	while (name[nwn++])
		;
	while (owner[olen++])
		;
	PointerToDog = malloc(sizeof(dog_t));
	if (PointerToDog == NULL)
		return (NULL);

	PointerToDog->name = malloc(nwn * sizeof(PointerToDog->name));
	if (PointerToDog == NULL)
		return (NULL);
	for (i = 0; i < nwn; i++)
		PointerToDog->name[i] = name[i];

	PointerToDog->age = age;

	PointerToDog->owner = malloc(olen * sizeof(PointerToDog->owner));
	if (PointerToDog == NULL)
		return (NULL);
	for (i = 0; i < olen; i++)
		PointerToDog->owner[i] = owner[i];
	return (PointerToDog);
}
