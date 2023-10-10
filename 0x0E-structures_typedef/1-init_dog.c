#include "dog.h"

/**
* init_dog - new type struct dog.
* @d:         Parameter one.
* @name:      Parameter two.
* @age:       Parameter three.
* @owner:     Parameter four.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
