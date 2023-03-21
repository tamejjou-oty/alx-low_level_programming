
#include "main.h"
#include <string.h>
int main(void)
{
	char string[20] = "_putchar";
	unsigned int i;

	for (i = 0; i < strlen(string); i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
