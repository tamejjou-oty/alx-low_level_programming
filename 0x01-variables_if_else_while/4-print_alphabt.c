#include <stdio.h>

#include <stdlib.h>

#include <string.h>


/**

 * main - Prints the alphabet without q and e.

 *

 * Return: Always 0 (Success)

 */

int main(void)

{

        int i;


        for (i = 97; i < 123; i++)

        {

                if (i != 101 && i != 113)

                {

                        putchar(i);

                }

        }

        putchar('\n');

        return (0);

}



5-print_numbers.c


#include <stdio.h>


/**

 * main - Prints numbers from 0 to 9.

 *

 * Return: Always 0 (Success)

 */

int main(void)

{

        int i;


        for (i = 0; i < 10; i++)

        {

                printf("%d", i);

        }

        putchar('\n');

        return (0);

}
