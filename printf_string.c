#include "main.h"

int print_string(va_list args, int count_of_printed)
{
    char *str = va_arg(args, char *);
    while (*str != '\0') {
        putchar(*str);
        count_of_printed++;
        str++;
    }
    return count_of_printed;
}
