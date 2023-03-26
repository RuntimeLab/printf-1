#include "main.h"

int printf_string(va_list args, int printed)
{
    char *string = va_arg(args, char *);
    while (*string != '\0') {
        _putchar(*string);
        printed++;
        string++;
    }
    return (printed);
}

