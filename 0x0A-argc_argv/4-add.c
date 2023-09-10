#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_positive_number - check if a string is a positive number
 * @str: The string to check
 *
 * Return: true on positive, false, if otherwise
 */
bool is_positive_number(const char *str)
{
	if (*str == '\0')
	{
		return (1);
	}

	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (1);
		}
		str++;
	}
	return (0);
}
