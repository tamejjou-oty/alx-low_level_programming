#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of numbers entered
 * @argv: numbrs to multiply
 *
 * Return: 0 if success, 1 if more than two arguments
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(*(argv + 1)) * atoi(argv[argc - 1]));
	return (0);
}
