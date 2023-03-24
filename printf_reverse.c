#include "main.h"

int print_reversed(va_list args, int count_of_printed)
{
    char *str = va_arg(args, char *);
    int len = 0, i;

    while (str[len])
        len++;

    for (i = len - 1; i >= 0; i--)
    {
        _putchar(str[i]);
        count_of_printed++;
    }

    return count_of_printed;
}
