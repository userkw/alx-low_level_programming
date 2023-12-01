#include "main.h"

/**
 * append_text_to_file - Appends text
 * @filename: pointer
 * @text_content: The str
 *
 * Return: is NULL - -1
 *         file does not exist- -1
 *         else- 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ob, wb, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	ob = open(filename, O_WRONLY | O_APPEND);
	wb = write(ob, text_content, lent);

	if (ob == -1 || wb == -1)
		return (-1);

	close(ob);

	return (1);
}
