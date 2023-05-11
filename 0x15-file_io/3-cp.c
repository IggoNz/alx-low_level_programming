#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close(int fd);

/**
 * create_buffer - alloca bytes amounting to 1024 for a buffer
 * @file: the buffer filename which will be storing the characters
 * Return: should return a pointer which points to the newly allocated
 * file name
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char * 1024));

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - closes the descriptors of a file
 * @fd: refers to the file descriptor of interest
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error, Can't close fd %d\n," fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file
 * @argc: denotes the number of arguments which have been
 * supplied to the program
 * @argv: denotes the array of pointers to the arguments.
 * Return: if successful return 0
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], 0_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 | r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error, Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}


