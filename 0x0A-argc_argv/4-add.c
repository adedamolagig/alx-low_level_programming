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
		return (0);
	}

	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
