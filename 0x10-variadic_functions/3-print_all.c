#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints different things according to a code.
 * @format: A code that tells the box what to print.
 *            - 'c' for a single character
 *            - 'i' for a number (integer)
 *            - 'f' for a number with decimal points (float)
 *            - 's' for a word (string)
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
    va_list args;  // This is like a list of instructions you give to the box.
    char *separator = "";  // This helps separate different things that the box prints.
    unsigned int i = 0;  // This keeps track of which instruction we're using.

    va_start(args, format);  // We start telling the box what to do.

    while (format && format[i])  // As long as we have instructions and we're not done yet...
    {
        if (i > 0)
            printf("%s", separator);  // We use a comma or space to separate things.

        switch (format[i])  // Depending on the instruction...
        {
            case 'c':  // If it's 'c', we print a single character.
                printf("%c", va_arg(args, int));  // We take the next instruction from the list.
                break;

            case 'i':  // If it's 'i', we print a number (integer).
                printf("%d", va_arg(args, int));  // Again, we take the next instruction.
                break;

            case 'f':  // If it's 'f', we print a number with decimal points (float).
                printf("%f", va_arg(args, double));  // The box knows what to do.
                break;

            case 's':  // If it's 's', we print a word (string).
                {
                    char *str = va_arg(args, char *);  // We get the word from the list.
                    if (!str)
                        str = "(nil)";  // If there's no word, we say "(nil)".
                    printf("%s", str);  // The box prints the word.
                }
                break;

            default:
                i++;  // If it's something we don't understand, we skip it.
                continue;
        }

        separator = ", ";  // For the next thing, we'll use a comma and space.
        i++;  // Let's move on to the next instruction.
    }

    va_end(args);  // We're done telling the box what to do.
    printf("\n");  // We tell the box to go to the next line.
}

int main()
{
    // Now, let's use the magic box:
    print_all("csfi", 'H', "Hello", 42, 3.14);
    // This will print: "H, Hello, 42, 3.140000"
    
    return (0);
}

