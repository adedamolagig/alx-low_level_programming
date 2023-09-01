#include "main.h"

/**
 * _puts_recursion- Prints a string followed by a new line using recursion
 *
 * @s: pointer to the null-terminated character array (string)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	} else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
