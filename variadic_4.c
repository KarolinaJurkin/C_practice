// Write a C program to concatenate a variable number of strings passed as arguments to a function using variadic functions.

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *concat(int count, char *str1, ...)
{
    va_list list;
    va_start(list, str1);
    int	len = strlen(str1);
    for (int i = 0; i < count - 1; i++)
    {
        len += strlen(va_arg(list, char*));
    }
	char	*result;
	result = calloc(len + 1, 1);
	for (int i = 0; i < strlen(str1); i++)
	{
		result[i] = str1[i];

	}
	va_start(list, str1);
	for (int i = 0; i < count - 1; i++)
	{
		strcat(result, va_arg(list, char*));
	}
	result[len] = '\0';
    va_end(list);
    return (result);
}

int main(void)
{
    printf("%s\n", concat(3, "To ", "jest", " test."));
    return (0);
}