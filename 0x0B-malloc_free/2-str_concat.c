#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: first string to be concatenated.
 * @s2: second string to be concatenated.
 *
 * Return: pointer to the newly allocated space in memory
 * containing the concatenated strings, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated_str;
	int s1_len = 0, s2_len = 1, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	/* Calculate the lengths of s1 and s2 */
	while (s1[s1_len])
	{
		s1_len++;
	}
	while (s2[s2_len])
	{
		s2_len++;
	}
	/* Allocate memory for the concatenates string, including space for the null terminator */
	concatenated_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));

	/* Check if memory allocated failed */
	if (concatenated_str == NULL)
	{
		return (NULL);
	}
	/* Copy the characters from s1 to concatenated_str */
	for (i = 0; i < s1_len; i++)
	{
		concatenated_str[i] = s1[i];
	}

	/*Concatenate the characters from s2 to concatenated_str */
	for (j = 0; j < s2_len; j++)
	{
		concatenated_str[i] = s2[j];
		i++;
	}
	/* add null terminator to the end of the concatenates string*/
	concatenated_str[i] = '\0';
	return (concatenated_str);
}
