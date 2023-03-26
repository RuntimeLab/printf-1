#include "main.h"

int printf_integer(va_list args, int printed)
{
    int num = va_arg(args, int);
    if (num < 0) {
        _putchar('-');
        printed++;
        num = -num;
    }
    int digits = 0;
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        _putchar(digit + '0');
        printed++;
        temp /= 10;
    }
    return (printed);
}
