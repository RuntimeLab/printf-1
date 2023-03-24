#include "main.h"

int printf_char(va_list args, int count_of_printed)
{
    int character = va_arg(args, int);
    putchar(character);
    return count_of_printed + 1;
}
