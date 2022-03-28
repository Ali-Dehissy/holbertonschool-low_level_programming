#include "main.h"

/**
 * read_textfile - reads a txt file and prints
 *@filename : const char
 *@letters : size of array
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a = malloc(letters);
	int fd;
	int fz;

	if (filename == NULL)
		return (0);

	if (a == NULL)
		return (0);

	fd = open("filename", O_RDONLY);
	{
		if (fd == -1)
			return (0);
	}

	fz = read(fd, a, letters);

	write(STDOUT_FILENO, a, fz);

	free(a);
	close(fd);

	return (fz);
}
