#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function which is used to read the
 * contents of a texfile and print them to standard output
 * @filename: the file whose contents are being read
 * @letters: the number of letters in the file being read
 * Return: if successful, return w- which is the number of bytes
 * which are read and printed else return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
/**
 * The variables char *buf, ssize_t fd, ssize_t w, and ssize_t t are all used to store information related to the text file. The char *buf stores a pointer to the allocated memory for the file, the ssize_t fd stores the file descriptor, the ssize_t w stores the number of characters written to the screen, and the ssize_t t stores the number of characters read from the file.
 * The code t = read(fd, buff, letters); reads the file and stores the number of characters read in the variable t. The code w = write(STDOUT_FILENO, buf, t); then writes the contents of the file to the screen and stores the number of characters written in the variable w.
 * The code free(buf); frees the memory that was allocated for the file. The code close(fd); closes the file descriptor so that the file is no longer accessible. The code return (w); returns the number of characters that were written to the screen.
 */
