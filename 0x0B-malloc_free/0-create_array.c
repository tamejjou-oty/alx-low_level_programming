#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes with specific char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to the array, or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
