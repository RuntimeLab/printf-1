#include "main.h"

int print_char(va_list args, int count)
{
    int c = va_arg(args, int);
    putchar(c);
    return count + 1;
}
