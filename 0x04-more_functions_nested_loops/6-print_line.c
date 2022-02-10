#include <unistd.h>
#include "main.h"
/**
 * print_line - print a line
 *@n : integer
 * Return: On success void.
 */
void print_line(int n)
{
        int i = '0';

        while (i < n)
        {
        if (n < 0)
        {
        putchar('\n');
        }
        else
        {
        putchar('_');
        }

        putchar('\n');
        i++;

        }
}
