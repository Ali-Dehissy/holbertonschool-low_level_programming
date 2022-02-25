#include "main.h"
/**
 * main - prints the number of arguments
 *@argc : integer
 *@argv : pointer of arrays
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
