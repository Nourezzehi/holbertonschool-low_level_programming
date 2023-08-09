#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: content to add to the newly created file
 * Return: num of read letters added to file or -1 if failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_RDWR | O_CREAT);
		if (fd == -1)
			return (fd);
		return (1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
		return (fd);
	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (w);
	close(fd);
	return (1);
}
