

#include <stdio.h>

/**
 * bmain - executed before main
 * Return: no
 */

void __attribute__((constructor)) bmain()
{
    printf("You're beat! and yet, you must allow,");
    printf("\nI bore my house upon my back!\n");
}
