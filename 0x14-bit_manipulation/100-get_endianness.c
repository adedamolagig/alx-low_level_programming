#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if the system is big endian, 1 if it's little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;
	/* If the first byte (lowest address) is 1, it's little endian.*/
	/* If the last byte (highest address) is 1, it's big endian. */
	return (byte[0] == 1 ? 1 : 0);
}
