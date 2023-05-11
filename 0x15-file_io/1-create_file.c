#include "main.h"

/**
 * create_file - used to create a file
 * @filename: points to the file being created
 * @text_content: points to the terminating string which
 * will be written to the created filename
 * Return: if successfuly creates the file return 1 if not successful
 * return -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
/**
 * This code is used to create a file and write text content to it. It takes two parameters: a const char pointer to the filename (which is the name of the file to create) and a char pointer to the text content which should be written to the file.
 * The code first checks if the filename is valid (i.e. not NULL). Then it calculates the length of the text content (if it is not NULL). It then creates the file using the open() function with the O_CREAT, O_RDWR, and O_TRUNC flags. The write() function is then used to write the text content to the file, and close() is used to close the file descriptor. Finally, the function returns 1 if the file was created and written successfully, or -1 if it was not.
