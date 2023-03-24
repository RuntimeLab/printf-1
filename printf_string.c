#include "main.h"

int print_string(va_list args, int count)
{
    char *str = va_arg(args, char *);
    while (*str != '\0') {
        putchar(*str);
        count++;
        str++;
    }
    return count;
}
