#include "main.h"
#include <stdlib.h>
/**
 * main - multiplication
 *@argc : integer
 *@argv : pointer of arrays
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}

	else
	{
		printf("Error\n");
	}

	return (1);

}
