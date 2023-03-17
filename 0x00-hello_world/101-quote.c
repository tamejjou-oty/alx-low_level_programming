#include <stdio.h>
/**
 * main - Prints sentence
 * Return: returns 1 for failure
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(char), sizeof(str) - 1, stdout);
	return (1);
}
