#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success, 1 if more than two arguments
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return 1;
	}

	int num1 = atoi(argv[1]) , num2 = atoi(argv[2]);
	int redult = nim1 * num2;

	printf("%d\n",result);

	return 0;
}
