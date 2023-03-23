#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}
int main(void) {
    char c = 'A';
    if (_isupper(c)) {
       _putchar("%c is uppercase\n", c);
    } else {
       _putchar("%c is not uppercase\n", c);
    }
    return 0;
}
