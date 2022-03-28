#include "main.h"
/**
 *create_file - function that  creates a file
 *@filename : const char
 *@text_content : char pointer
 * Return: On success 1.
 */
int create_file(const char *filename, char *text_content)
{
	int res;

	if (filename == NULL)
		return (-1);

	res = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (res == -1)
		return (-1);

	if (text_content != NULL)

	{

		write(res, text_content, strlen(text_content));

	}

	close(res);

	return (1);
}
