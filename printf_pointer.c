#include "main.h"

int print_pointer(va_list args, int printed) {
    void *ptr = va_arg(args, void*);
    unsigned long long num = (unsigned long long) ptr;
    int digits = 0;
    int i;
    unsigned long long temp = num;
    
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

        for (int i = digits - 1; i >= 0; i--) {
            int digit = num % 16;
            hex[i] = hex_digits[digit];
            num /= 16;
        }

        for (int i = 0; i < digits; i++) {
            printed += _putchar(hex[i]);
        }
    }

    return printed;
}

