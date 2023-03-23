#include "main.h"

/**
 * print_numbers - print 0 - 9
 *
 * Return: Always 0.  
 */
void print_numbers(void);
{
	int i;

	for(i = '0'; i < 10;  i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}
int main() {
    print_numbers();  // call the function
    return 0;
}
