#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        char ch;

        for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	if (ch != 'q' && ch != 'e')
	putchar(ch);
        }
        putchar('\n');
        return (0);
}

