#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Entry point
 * @d: passing structure at the function
 * @name: store a strig for main
 * @age: store a number for main
 * @owner: store a strig for main
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
