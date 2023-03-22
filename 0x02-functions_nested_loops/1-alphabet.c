#include "main.h"
/*print_alphadet - print alphabet in lowercase*/
void print_alphabet(void)
{
	char harf ='a';
	while (harf <= 'z')
	{
		_putchar(harf);
		harf++;
	}
	_putchar('\n');
}
