#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int i, num_bytes;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    num_bytes = atoi(argv[1]);

    if (num_bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    unsigned char *opcode_ptr = (unsigned char *)main;

    for (i = 0; i < num_bytes - 1; i++)
    {
        printf("%02x ", opcode_ptr[i]);
    }

    printf("%02x\n", opcode_ptr[i]); // Print the last opcode with a new line

    return (0);
}
