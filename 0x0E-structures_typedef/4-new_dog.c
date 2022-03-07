#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Create new dog.
 * @name: value (dog's name).
 * @age: value (dog's age).
 * @owner: value (dog's owner).
 * Return: the new dog.
 **/


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *New_Dog = NULL;
char *Copy_Name = name, *Copy_Owner = NULL;

	New_Dog = malloc(sizeof(dog_t));
	if (New_Dog == NULL)
		return (NULL);

	New_Dog->name = malloc(sizeof(name) + 1);
	if (New_Dog->name == NULL)
	{
		free(New_Dog);
		return (NULL);
	}

	New_Dog->owner = malloc(sizeof(owner) + 1);
	if (New_Dog->owner == NULL)
	{
		free(New_Dog->name);
		free(New_Dog);
	}
	New_Dog->age = age;
	New_Dog->name = Copy_Name;
	New_Dog->owner = Copy_Owner;
	return (New_Dog);
}
