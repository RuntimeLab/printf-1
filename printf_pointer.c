#include "main.h"

int printf_pointer(va_list args, int printed) {
    void *ptr = va_arg(args, void*);
    unsigned long num = (unsigned long) ptr;
    int digits = 0;
    unsigned long temp = num;
    int i;

    while (temp != 0) {
        digits++;
        temp /= 16;
    }
    
    printed += _putchar('0');
    printed += _putchar('x');

    if (num == 0) {
        printed += _putchar('0');
    } else {
        char hex_digits[16] = "0123456789abcdef";
        char hex[digits];

        for (i = digits - 1; i >= 0; i--) {
            int digit = num % 16;
            hex[i] = hex_digits[digit];
            num /= 16;
        }

        for (i = 0; i < digits; i++) {
            printed += _putchar(hex[i]);
        }
    }

    return printed;
}
