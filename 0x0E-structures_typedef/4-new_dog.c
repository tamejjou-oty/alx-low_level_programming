#include <stdio.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to the new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int namelen = 0, ownerlen = 0;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new == NULL || !(name) || !(owner))
	{
		free(new);
		return (NULL);
	}

	while (name[namelen] != '\0')
		namelen++;
	while (owner[ownerlen] != '\0')
		ownerlen++;
	new->name = malloc((namelen + 1) * sizeof(char));
	new->owner = malloc((ownerlen + 1) * sizeof(char));
	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}
	copy(new->name, namelen, name);
	new->age = age;
	copy(new->owner, ownerlen, name);
	return (new);
}
/**
 * copy - stores copy of a string
 * @dest: pointer to result string
 * @len: length of string
 * @src: source string to copy from
 *
 * Return: pointer to where the copied string is stored
 */
char *copy(char *dest, int len, char *src)
{
	int i;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
