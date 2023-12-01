#include "main.h"

/**
 * create_file - Creates
 * @filename: pointer
 * @text_content: A pointer to a str
 *
 * Return: fails - -1
 *         Otherwise - 1
 */
int create_file(const char *filename, char *text_content)
{
	int fdd, w, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	fdd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fdd, text_content, lent);

	if (fdd == -1 || w == -1)
		return (-1);

	close(fdd);

	return (1);
}
