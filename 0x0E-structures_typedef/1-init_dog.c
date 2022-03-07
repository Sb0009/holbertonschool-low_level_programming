#include "dog.h"
#include <stdio.h>
/**
*init_dog -initialize var type struct dog
*@d:Ptr type struct
*@name:string char-value
*@age:type float-value
*@owner:string char-value
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}

}
