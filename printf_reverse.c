#include "main.h"

int printf_reverse(va_list args, int printed)
{
    char *str = va_arg(args, char *);
    int len = 0, i;

    while (str[len])
        len++;

    for (i = len - 1; i >= 0; i--)
    {
        putchar(str[i]);
        printed++;
    }

    return printed;
}
