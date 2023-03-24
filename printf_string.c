#include "main.h"

int printf_string(va_list args, int count_of_printed)
{
    char *string = va_arg(args, char *);
    while (*string != '\0') {
        putchar(*string);
        count_of_printed++;
        string++;
    }
    return count_of_printed;
}

