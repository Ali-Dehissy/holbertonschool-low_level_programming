#include "main.h"
#include <ctype.h>
/**
 * main - multiplication
 *@argc : integer
 *@argv : pointer of arrays
 * Return: Always 1.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc <= 2)
	{
		printf("0\n");
	}
	{
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i] == 0))
	{
		printf("Error\n");
		return (1);
	}
	else
		sum += atoi(argv[i]);
	}
		printf("%d\n", sum);
	}
	return (0);
}
