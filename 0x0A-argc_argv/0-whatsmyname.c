#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of  program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
