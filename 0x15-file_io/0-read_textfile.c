#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file
 * @filename: text
 * @letters: number
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fdd;
	ssize_t w;
	ssize_t t;

	fdd = open(filename, O_RDONLY);
	if (fdd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fdd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fdd);
	return (w);
}
