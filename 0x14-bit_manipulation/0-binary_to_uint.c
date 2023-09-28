#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and  chars.
 *
 * Return: The converted number, or 0 if there are invalid char or NULL input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		/* Left shift the result and add the current bit (b[i]) */
		result = (result << 1) | (b[i] - '0');

		i++;
	}

	return (result);
}
