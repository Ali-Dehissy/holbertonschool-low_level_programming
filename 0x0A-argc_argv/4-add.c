#include "main.h"
#include <ctype.h>
#include <string.h>
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
	int k = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
	for (k = 0; k < (int)strlen(argv[i]); k++)
	{
	if (isdigit(argv[i][k]) == 0)
		{
		printf("Error\n");
		return (1);
		}
	else
	{
		sum += atoi(argv[i]);
	}
	}
		printf("%d\n", sum);
	}
	}
	return (0);

}
