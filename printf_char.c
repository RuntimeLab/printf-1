#include "main.h"

int printf_char(va_list args, int printed)
{
    int character = va_arg(args, int);
    putchar(character);
    return printed + 1;
}
