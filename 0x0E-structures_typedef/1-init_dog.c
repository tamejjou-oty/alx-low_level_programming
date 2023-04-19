#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d : pointer to the variable
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		_malloc(d);
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
/**
 * _malloc - allocates memory for a variable of type struct dog
 * @d : pointer to variable
 *
 * Return: pointer to the struct dog variable
 */
struct dog *_malloc(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	return (d);
}
