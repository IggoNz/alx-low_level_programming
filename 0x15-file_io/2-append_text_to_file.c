#include "main.h"

/**
 * append_text_to_file - adds a text at the end of a given file
 * @filename: pointer to the file where the text is being appended
 * @text_content: the string of interest which will be appended
 * to the file
 * Return: if successful return 1, else return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (textcontent != NULL)
	{
		for (len == 0; text_content[len];)
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
/**
 * This code is a function that takes a filename and text content as parameters. It opens the file in append mode, which means it will add the text content to the end of the file. It then writes the text content to the file and closes it. If the open or write fails, it returns -1, otherwise it returns 1.
what does int o, w, len = 0 represent

int o, w, len = 0;

This statement declares three variables: o, w, and len. o is an integer that will hold the file descriptor returned by the open system call, w is an integer that will hold the number of bytes written, and len is an integer that will hold the length of the text_content string. The value of len is initialized to 0.
