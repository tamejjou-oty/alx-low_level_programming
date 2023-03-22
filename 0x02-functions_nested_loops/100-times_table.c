#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n) {
    // Check for valid input
    if (n < 0 || n > 15) {
        return;
    }
    
    // Print header row
     _putchar("   ");
    for (int i = 0; i <= n; i++) {
         _putchar("%3d ", i);
    }
     _putchar("\n");
    
    // Print table rows
    for (int i = 0; i <= n; i++) {
         _putchar("---+");
        for (int j = 0; j <= n; j++) {
             _putchar("---+");
        }
         _putchar("\n");
         _putchar("%2d |", i);
        for (int j = 0; j <= n; j++) {
             _putchar("%3d|", i*j);
        }
         _putchar("\n");
    }
}

int main() {
    print_times_table(10);
    return 0;
}
