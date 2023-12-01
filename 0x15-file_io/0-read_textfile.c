#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file
 * @filename: The text
 * @letters: The numbr of letters
 * Return: The actual numbr of bytes,
 *         or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
        char *bf;
	ssize_t fdd;
	ssize_t a;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (fdd == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	b = read(fdd, bf, letters);
	a = write(STDOUT_FILENO, bf, b);

	free(bf);
	close(fdd);
	return (a);
}
