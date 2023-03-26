#include "main.h"

int printf_pointer(va_list args, int printed)
{
    void *ptr = va_arg(args, void *);
    unsigned long long num = (unsigned long long) ptr;

    printed += printf_string("0x");
    printed += printf_hex(num, 0);

    return printed;
}
