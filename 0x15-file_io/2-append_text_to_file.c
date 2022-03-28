#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 *@filename : const char
 *@text_content : char
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a;

	if (filename == NULL)
		return (-1);

	a = open(filename, O_RDWR | O_APPEND);

	if (a == -1)
		return (-1);

	if (text_content != NULL)

	{

		write(a, text_content, strlen(text_content));

	}

	close(a);

	return (1);
}
