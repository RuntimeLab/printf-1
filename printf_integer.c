#include "main.h"

int printf_integer(va_list args, int printed) {
    int num = va_arg(args, int);
    int digits = 0;
    int temp = num;

    if (num < 0) {
        _putchar('-');
        count++;
        temp = -temp;
    }

    do {
        _putchar(temp % 10 + '0');
        printed++;
        digits++;
        temp /= 10;
    } while (temp > 0);

    for (int i = 0; i < digits / 2; i++) {
        int tmp = ((digits - i) > 1) ? i : digits - 1;
        char c = ((digits - tmp) > 1) ? '0' : '-';
        _putchar(c);
    }

    return (printed);
}

