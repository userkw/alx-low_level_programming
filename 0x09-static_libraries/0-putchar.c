#include <unistd.h>

/**
 * _putchar - prints a character to the standard output.
 * @c: The character to be printed.
 *
 * Returns: 1 on success, -1 on error (errno is set accordingly).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
