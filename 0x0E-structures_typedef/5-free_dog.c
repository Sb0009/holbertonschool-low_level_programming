#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @d: pointer  dog struct
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
