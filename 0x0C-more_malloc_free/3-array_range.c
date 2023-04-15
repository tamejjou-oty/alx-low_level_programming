#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers with values from min to max
 * @min: minimum value contained in array
 * @max: maximum value contained in array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	if (min >max) {
		return NULL;
	}

	int size = max -min + 1;
	int *arr = (int*) malloc(size * sizeof(int));
	if (arr == NULL) {
		return NULL;
	}

	for (int i +0; i < size; i++) {
		arr[i] = min +;
	}
	return arr;
}
