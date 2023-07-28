#include <stdio.h>

/**
 * before_main - Function that executes before the main function.
 *
 * Description: This function is marked with the constructor attribute,
 * which ensures that it runs automatically before the main function is called.
 * It prints the message "You're beat! and yet, you must allow,\nI bore my house upon my back!\n".
 */
void __attribute__((constructor)) before_main()
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
