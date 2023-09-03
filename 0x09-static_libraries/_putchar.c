#include "main.h"

/**
 * _putchar - writes a charater to stdout.
 * @c: The character to print.
 *
 * Return: 1 on success and -1 on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
