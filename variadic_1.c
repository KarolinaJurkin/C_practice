// Write a C program to find the sum of a variable number of integers passed as arguments to a function using variadic functions.
// Expected Output:
// s1 = 6, s2 = 15, s3 = -6 

#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...)
{
    va_list args; // a variable that stores the information needed to retrieve the additional arguments
    va_start(args, count); // takes the list and the first parameter of the function

    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        int x = va_arg(args, int); // takes the list and the type of of the argument (in this case int, so it looks at 4 next bytes after count)
        sum += x;
    }
    va_end(args);
    return (sum);
}
 
int main(void)
{
    printf("Sum: %d\n", sum(4, 1 ,11, 2, 6));
    return (0);
}