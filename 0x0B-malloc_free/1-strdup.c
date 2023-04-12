#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - return a pointer to new allocated space in memory
 * @oty: cher
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *t;
	int i, r = 0;

	if (oty == NULL)
		return (NULL);
	i =0;
	while (oty[i] != '\0')
		i++;

	t = malloc(sizeof(char) * (i +1));

	if (t == NULL)
		return (NULL);

	for (r = 0; oty[r]; r++)
		t[r] = oty[r];

	return (t);
}
