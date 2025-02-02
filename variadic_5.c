//  Write a C program to count the number of characters in a variable number of strings passed as arguments to a function using variadic functions.

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count(int num, ...)
{
    va_list args;
    va_start(args, num);
    int len = 0;
    for (int i = 0; i < num; i++)
    {
        len += strlen(va_arg(args, char*));
    }
    va_end(args);
    return (len);
}

int main(void)
{
    printf("Number of characters: %d\n", count(4, "jakies ", "tam ", "znaczki", "abc"));
    return (0);
}