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
	char *oty;
	unsigned int i;

	oty = malloc(sizeof(char) * size);
	if (size == 0 || oty == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		oty[i] = c;
	return (oty);
}
