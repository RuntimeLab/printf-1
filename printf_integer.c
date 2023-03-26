#include "main.h"

int printf_integer(va_list args, int printed)
{
    int num = va_arg(args, int);
    int digits = 0;

    // handle negative numbers
    if (num < 0) {
        _putchar('-');
        printed++;
        num = -num;
    }

    // count number of digits
    int temp = num;
    do {
        digits++;
        temp /= 10;
    } while (temp != 0);

    // print digits in correct order
    temp = num;
    for (int i = digits - 1; i >= 0; i--) {
        int divisor = pow(10, i);
        int digit = temp / divisor;
        _putchar('0' + digit);
        printed++;
        temp %= divisor;
    }

    return printed;
}
