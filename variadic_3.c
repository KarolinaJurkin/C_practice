// Write a C program to find the maximum and minimum values of a variable number of integers passed as arguments to a function using variadic functions.

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

int min(int count, ...)
{
    va_list list;
    va_start(list, count);

    int min = INT_MAX;

    for (int i = 0; i < count; i++)
    {
        int x = va_arg(list, int);
        if (x < min)
            min = x;
    }
    va_end(list);
    return (min);
}

int max(int count, ...)
{
    va_list list;
    va_start(list, count);

    int max = INT_MIN;

    for (int i = 0; i < count; i++)
    {
        int x = va_arg(list, int);
        if (x > max)
            max = x;
    }
    va_end(list);
    return (max);
}

int main(void)
{
    printf("Min: %d\nMax: %d\n", min(5, -6, 8, 142, -163, 0), max(5, -6, 8, 142, -163, 0));
    return (0);
}