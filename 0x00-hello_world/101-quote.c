#include <unistd.h>
/**
 * main - Prints sentence
 * Return: returns 1 for failure
 */
int main(void) {
    char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, msg, 38);
    return 1;
}
