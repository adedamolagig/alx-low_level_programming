#include "main.h"

/**
 * main - prints program name.
 * @argc: integer variable of arg count.
 * @argv: character pointer.
 *
 * Return: Success(0).
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
