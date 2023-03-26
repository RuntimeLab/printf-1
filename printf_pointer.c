#include "main.h"

int printf_pointer(va_list args, int printed)
{
    void *ptr = va_arg(args, void *);
    unsigned long int num = (unsigned long int) ptr;
    int digits = 0;
    int temp = num;
    _putchar('0');
    _putchar('x');
    printed += 2;
    while (temp != 0) {
        digits++;
        temp /= 16;
    }
    if (num == 0) {
        _putchar('0');
        printed++;
    }
    else {
        char hex_digits[] = "0123456789abcdef";
        char buffer[digits];
        int i = digits - 1;
        while (num != 0) {
            buffer[i] = hex_digits[num % 16];
            num /= 16;
            i--;
        }
        for (i = 0; i < digits; i++) {
            _putchar(buffer[i]);
            printed++;
        }
    }
    return (printed);
}
